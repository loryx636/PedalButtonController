#include "oshaxiswca.h"
#include "ui_oshaxiswca.h"
#include <QPainter>
#include <QMouseEvent>
#include <QPolygon>
#include "../common_types/common_defines.h"

OSHaxiswca::OSHaxiswca(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OSHaxiswca)
{
    ui->setupUi(this);

    PRbar_offset = 60; //ui->AxisValue->rect().x();
    LeftPinPosX = PRbar_offset;
    RightPinPosX = ui->AxisValue->width() + PRbar_offset;
    Lpoints[0].setX(LeftPinPosX-7);
    Lpoints[1].setX(LeftPinPosX-7);
    Lpoints[2].setX(LeftPinPosX);
    Lpoints[3].setX(LeftPinPosX);
    Rpoints[0].setX(RightPinPosX+7);
    Rpoints[1].setX(RightPinPosX+7);
    Rpoints[2].setX(RightPinPosX);
    Rpoints[3].setX(RightPinPosX);

    LeftPinPoly << Lpoints[0] << Lpoints[1] << Lpoints[2] << Lpoints[3];
    RightPinPoly << Rpoints[0] << Rpoints[1] << Rpoints[2] << Rpoints[3];
    LeftpinColor = QColor(1,119,215);
    RightpinColor = QColor(1,119,215);
    LeftPinDrag=false;
    RightPinDrag=false;

    connect(ui->lineEdit_MaxCalib, SIGNAL(textEdited(QString)), SLOT(MaxCalibCanged(QString)));
    connect(ui->lineEdit_MinCalib, SIGNAL(textEdited(QString)), SLOT(MinCalibCanged(QString)));
    connect(ui->checkBox_AutoCalib, SIGNAL(toggled(bool)), SLOT(AutoCalibToggled(bool)));

    ui->lineEdit_MinCalib->setText(QString::number(0));
    ui->lineEdit_MaxCalib->setText(QString::number(MAX_ADC_RES-1));
    AutoCalibEnabled=false;

    ui->AxisValue->setVisible(false);
    ui->sensorValue->setVisible(false);
}

OSHaxiswca::~OSHaxiswca()
{
    delete ui;
}

void OSHaxiswca::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    uint16_t width,tmp;


    width = ui->AxisValue->width();
    tmp = width/20;

    painter.begin(this);
    painter.setPen(Qt::lightGray);
    painter.drawRect(QRect(PRbar_offset,7,width,2));
    painter.drawRect(BARXSTART,SENSORBARYSTART,BARXEND,SENSORBARHEIGHT+AXISBARHEIGHT);
    painter.drawLine(BARXSTART,SENSORBARYSTART+SENSORBARHEIGHT,BARXSTART+BARXEND,SENSORBARYSTART+SENSORBARHEIGHT);
    for (uint8_t i=0; i<21; i++){
        painter.drawLine((i*tmp)+PRbar_offset,15,(i*tmp)+PRbar_offset,18);
    }
    painter.setBrush(LeftpinColor);
    painter.setPen(LeftpinColor);
    painter.drawPolygon(Lpoints, 4, Qt::WindingFill);
    painter.setBrush(RightpinColor);
    painter.setPen(RightpinColor);
    painter.drawPolygon(Rpoints, 4, Qt::WindingFill);

    painter.setPen(SENSORCALIBOUTCOLOR);


    if (sensor_value < min_calib_value) {
        painter.setBrush(SENSORCALIBOUTCOLOR);
        painter.drawRect(BARXSTART,SENSORBARYSTART,
                         map(sensor_value,0,4095,0,BARXEND),SENSORBARHEIGHT);
    }

    if ((sensor_value > min_calib_value) && (sensor_value < max_calib_value)) {
        painter.setBrush(SENSORCALIBOUTCOLOR);
        painter.drawRect(BARXSTART,SENSORBARYSTART,
                         map(min_calib_value,0,4095,0,BARXEND),SENSORBARHEIGHT);
        painter.setBrush(SENSORACTIVECOLOR);
        painter.drawRect(BARXSTART+map(min_calib_value,0,4095,0,BARXEND)+1,SENSORBARYSTART,
                         map(sensor_value-min_calib_value,0,4095,0,BARXEND),SENSORBARHEIGHT);
    }
    if (sensor_value > max_calib_value){
        painter.setBrush(SENSORCALIBOUTCOLOR);
        painter.drawRect(BARXSTART,SENSORBARYSTART,
                         map(min_calib_value,0,4095,0,BARXEND),SENSORBARHEIGHT);
        painter.drawRect(BARXSTART+map(max_calib_value,0,4095,0,BARXEND)+1,
                SENSORBARYSTART,map(sensor_value-max_calib_value,0,4095,0,BARXEND)+1,SENSORBARHEIGHT);

        painter.setBrush(SENSORACTIVECOLOR);
        painter.drawRect(BARXSTART+map(min_calib_value,0,4095,0,BARXEND)+1,SENSORBARYSTART,
                         map(max_calib_value-min_calib_value,0,4095,0,BARXEND),SENSORBARHEIGHT);
    }

    //painter.setBrush(SENSORACTIVECOLOR);
    //painter.drawRect(BARXSTART,SENSORBARYSTART,BARXEND,SENSORBARHEIGHT);
    painter.setBrush(AXISACTIVECOLOR);
    painter.drawRect(BARXSTART,AXISBARYSTART,
                     map(axis_value,0,4095,0,BARXEND),AXISBARHEIGHT);

    painter.end();
}

void OSHaxiswca::mouseMoveEvent(QMouseEvent *event)
{
    int16_t value=0;
    if (!AutoCalibEnabled) {
        if (LeftPinPoly.containsPoint(event->pos(),Qt::WindingFill)) {
                LeftpinColor = Qt::black;
        } else LeftpinColor = QColor(1,119,215);

        if (RightPinPoly.containsPoint(event->pos(),Qt::WindingFill)) {
                RightpinColor = Qt::black;
        } else RightpinColor = QColor(1,119,215);


        if (event->buttons() & Qt::LeftButton)
            drawPin(event->pos());

        if (LeftPinDrag) {
            LeftpinColor=Qt::lightGray;
            value=(MaxScaleValue/ui->AxisValue->width())*(LeftPinPosX-PRbar_offset);
            if (value<0) value=0;
            ui->lineEdit_MinCalib->setText(QString::number(value));
        }
        if (RightPinDrag) {
            RightpinColor=Qt::lightGray;
            value=(MaxScaleValue*(RightPinPosX-PRbar_offset))/ui->AxisValue->width();
            if (value > 4095) value=4095;
            ui->lineEdit_MaxCalib->setText(QString::number(value));
        }

        update();
    }
}

void OSHaxiswca::drawPin(QPoint pinpos) {
    uint16_t pinvalue;

    if ((pinpos.x()<PRbar_offset) || pinpos.x()>ui->AxisValue->width()+PRbar_offset) {
        return;
    }

    if ((LeftPinDrag) && pinpos.x()<RightPinPosX) {
        pinvalue=checkPinValue(pinpos.x(), 'L');
        fillPolygonArray(pinvalue, 'L');
        ui->lineEdit_MinCalib->setText(QString::number(LeftPinPosX));
        return;
    }

    if ((RightPinDrag) && pinpos.x()>LeftPinPosX) {
        pinvalue=checkPinValue(pinpos.x(), 'R');
        fillPolygonArray(pinvalue, 'R');
        ui->lineEdit_MaxCalib->setText(QString::number(RightPinPosX));
        return;
    }
}

void OSHaxiswca::mousePressEvent(QMouseEvent *event) {
    if (!AutoCalibEnabled) {
        if (LeftPinPoly.containsPoint(event->pos(),Qt::WindingFill)) {
            LeftPinDrag = true;
        }
        if (RightPinPoly.containsPoint(event->pos(),Qt::WindingFill)) {
            RightPinDrag = true;
        }
    }
}

void OSHaxiswca::mouseReleaseEvent(QMouseEvent *event) {
    LeftPinDrag = false;
    RightPinDrag = false;
}

void OSHaxiswca::MinCalibCanged(QString text) {
    uint16_t value;
    uint32_t pinvalue;

    value=text.toInt();
    pinvalue=(((ui->AxisValue->width()*value)/MaxScaleValue)+PRbar_offset);
    pinvalue=checkPinValue(pinvalue, 'L');
//    ui->lineEdit_MinCalib->setText(QString::number(pinvalue));
    fillPolygonArray(pinvalue, 'L');
    update();
}

void OSHaxiswca::MaxCalibCanged(QString text) {
    uint16_t value;
    uint32_t pinvalue;

    value=text.toInt();
    pinvalue=(((ui->AxisValue->width()*value)/MaxScaleValue)+PRbar_offset);
    pinvalue=checkPinValue(pinvalue, 'R');
//    ui->lineEdit_MaxCalib->setText(QString::number(pinvalue));
    fillPolygonArray(pinvalue, 'R');
    update();
}

uint16_t OSHaxiswca::checkPinValue(uint16_t pinvalue, char WhichPin) {
    if (WhichPin == 'L') {
        if (pinvalue >= RightPinPosX) pinvalue=RightPinPosX-1;
        if (pinvalue < PRbar_offset) pinvalue=PRbar_offset;
    }
    if (WhichPin == 'R') {
        if (pinvalue <= LeftPinPosX) pinvalue=LeftPinPosX+1;
        if (pinvalue > ui->AxisValue->width() + PRbar_offset) ui->AxisValue->width() + PRbar_offset;
    }
    return pinvalue;
}

void OSHaxiswca::AutoCalibToggled(bool state) {
    if (state) {
        AutoCalibEnabled=true;
        LeftpinColor = Qt::lightGray;
        RightpinColor = Qt::lightGray;
        update();
        ui->lineEdit_MaxCalib->setEnabled(false);
        ui->lineEdit_MinCalib->setEnabled(false);
        ui->label_MinCalib->setEnabled(false);
        ui->label_MaxCalib->setEnabled(false);
    } else {
        ui->lineEdit_MaxCalib->setEnabled(true);
        ui->lineEdit_MinCalib->setEnabled(true);
        ui->label_MinCalib->setEnabled(true);
        ui->label_MaxCalib->setEnabled(true);
        AutoCalibEnabled=false;
        LeftpinColor = QColor(1,119,215);
        RightpinColor = QColor(1,119,215);
        update();
    }
}

void OSHaxiswca::fillPolygonArray(uint16_t value, char WhichPin) {
    if (WhichPin == 'L') {
        Lpoints[0].setX(value-7);
        Lpoints[1].setX(value-7);
        Lpoints[2].setX(value);
        Lpoints[3].setX(value);
        LeftPinPosX=value;
    //    ui->lineEdit_MinCalib->setText(QString::number(LeftPinPosX));
        LeftPinPoly.setPoint(0, Lpoints[0]);
        LeftPinPoly.setPoint(1, Lpoints[1]);
        LeftPinPoly.setPoint(2, Lpoints[2]);
        LeftPinPoly.setPoint(3, Lpoints[3]);
    }
    if (WhichPin == 'R') {
        Rpoints[0].setX(value+7);
        Rpoints[1].setX(value+7);
        Rpoints[2].setX(value);
        Rpoints[3].setX(value);
        RightPinPosX=value;
    //    ui->lineEdit_MaxCalib->setText(QString::number(RightPinPosX));
        RightPinPoly.setPoint(0, Rpoints[0]);
        RightPinPoly.setPoint(1, Rpoints[1]);
        RightPinPoly.setPoint(2, Rpoints[2]);
        RightPinPoly.setPoint(3, Rpoints[3]);
    }
}

uint16_t OSHaxiswca::LeftPinValue(void) {
    QString lineedit_value=ui->lineEdit_MinCalib->text();
    return lineedit_value.toUInt();
}

uint16_t OSHaxiswca::RightPinValue(void) {
    QString lineedit_value=ui->lineEdit_MaxCalib->text();
    return lineedit_value.toUInt();
}

bool OSHaxiswca::isAutoCalibEnabled(void) {
    return ui->checkBox_AutoCalib->isChecked();
}

void OSHaxiswca::setMinCalibValue(uint16_t value) {
    ui->lineEdit_MinCalib->setText(QString::number(value));
    MinCalibCanged(QString::number(value));
}

void OSHaxiswca::setMaxCalibValue(uint16_t value) {
    ui->lineEdit_MaxCalib->setText(QString::number(value));
    MaxCalibCanged(QString::number(value));
}

void OSHaxiswca::setPinsEnabled(bool state) {
    if (state) {
        LeftpinColor = QColor(1,119,215);
        RightpinColor = QColor(1,119,215);
    } else {
        LeftpinColor = Qt::lightGray;
        RightpinColor = Qt::lightGray;
    }
    update();
}

void OSHaxiswca::setAxisValue(uint16_t value) {
    //ui->AxisValue->setValue(value);
    //ui->AxisValue->setValue(3000);
    ui->label_axisValue->setText(QString::number(value));
    axis_value = value;
    update();
}

void OSHaxiswca::setSensorValue(uint16_t sensor, uint16_t min_calib, uint16_t max_calib) {
    ui->label_sensorValue->setText(QString::number(sensor));
    min_calib_value = min_calib;
    max_calib_value = max_calib;
    sensor_value = (sensor > 4095) ? 4095 : sensor;
    update();
}

void OSHaxiswca::setAutoCalib(uint8_t state) {
    if (state==1) ui->checkBox_AutoCalib->setChecked(true);
     else ui->checkBox_AutoCalib->setChecked(false);
}

int32_t OSHaxiswca::map(int32_t x, int32_t in_min, int32_t in_max, int32_t out_min, int32_t out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
