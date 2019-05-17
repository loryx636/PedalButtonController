/********************************************************************************
** Form generated from reading UI file 'oshaxiswca.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSHAXISWCA_H
#define UI_OSHAXISWCA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OSHaxiswca
{
public:
    QProgressBar *AxisValue;
    QLineEdit *lineEdit_MinCalib;
    QLineEdit *lineEdit_MaxCalib;
    QLabel *label_MinCalib;
    QLabel *label_MaxCalib;
    QCheckBox *checkBox_AutoCalib;
    QProgressBar *sensorValue;
    QLabel *label_axis;
    QLabel *label_axisValue;
    QLabel *label_sensor;
    QLabel *label_sensorValue;

    void setupUi(QWidget *OSHaxiswca)
    {
        if (OSHaxiswca->objectName().isEmpty())
            OSHaxiswca->setObjectName(QStringLiteral("OSHaxiswca"));
        OSHaxiswca->resize(750, 40);
        AxisValue = new QProgressBar(OSHaxiswca);
        AxisValue->setObjectName(QStringLiteral("AxisValue"));
        AxisValue->setGeometry(QRect(60, 20, 491, 16));
        QFont font;
        font.setPointSize(6);
        AxisValue->setFont(font);
        AxisValue->setStyleSheet(QStringLiteral(""));
        AxisValue->setMinimum(0);
        AxisValue->setMaximum(4095);
        AxisValue->setValue(0);
        AxisValue->setAlignment(Qt::AlignCenter);
        AxisValue->setTextVisible(true);
        lineEdit_MinCalib = new QLineEdit(OSHaxiswca);
        lineEdit_MinCalib->setObjectName(QStringLiteral("lineEdit_MinCalib"));
        lineEdit_MinCalib->setGeometry(QRect(0, 0, 41, 20));
        lineEdit_MinCalib->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_MaxCalib = new QLineEdit(OSHaxiswca);
        lineEdit_MaxCalib->setObjectName(QStringLiteral("lineEdit_MaxCalib"));
        lineEdit_MaxCalib->setGeometry(QRect(570, 0, 41, 20));
        lineEdit_MaxCalib->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_MinCalib = new QLabel(OSHaxiswca);
        label_MinCalib->setObjectName(QStringLiteral("label_MinCalib"));
        label_MinCalib->setGeometry(QRect(0, 20, 41, 21));
        label_MinCalib->setLayoutDirection(Qt::LeftToRight);
        label_MinCalib->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_MinCalib->setWordWrap(true);
        label_MaxCalib = new QLabel(OSHaxiswca);
        label_MaxCalib->setObjectName(QStringLiteral("label_MaxCalib"));
        label_MaxCalib->setGeometry(QRect(570, 20, 71, 21));
        label_MaxCalib->setWordWrap(true);
        checkBox_AutoCalib = new QCheckBox(OSHaxiswca);
        checkBox_AutoCalib->setObjectName(QStringLiteral("checkBox_AutoCalib"));
        checkBox_AutoCalib->setGeometry(QRect(640, 0, 111, 17));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        checkBox_AutoCalib->setFont(font1);
        sensorValue = new QProgressBar(OSHaxiswca);
        sensorValue->setObjectName(QStringLiteral("sensorValue"));
        sensorValue->setGeometry(QRect(60, 21, 491, 2));
        sensorValue->setStyleSheet(QStringLiteral("QProgressBar::chunk:horizontal {background: qlineargradient(x1: 0, y1: 0.5, x2: 1, y2: 0.5, stop: 0 red, stop: 1 red);}"));
        sensorValue->setMaximum(4095);
        sensorValue->setValue(0);
        sensorValue->setAlignment(Qt::AlignCenter);
        sensorValue->setTextVisible(false);
        label_axis = new QLabel(OSHaxiswca);
        label_axis->setObjectName(QStringLiteral("label_axis"));
        label_axis->setGeometry(QRect(430, 20, 51, 16));
        QFont font2;
        font2.setPointSize(7);
        label_axis->setFont(font2);
        label_axis->setAutoFillBackground(false);
        label_axis->setStyleSheet(QStringLiteral("background: transparent;"));
        label_axisValue = new QLabel(OSHaxiswca);
        label_axisValue->setObjectName(QStringLiteral("label_axisValue"));
        label_axisValue->setGeometry(QRect(480, 20, 41, 16));
        label_axisValue->setFont(font2);
        label_axisValue->setAutoFillBackground(false);
        label_axisValue->setStyleSheet(QStringLiteral("background: transparent;"));
        label_sensor = new QLabel(OSHaxiswca);
        label_sensor->setObjectName(QStringLiteral("label_sensor"));
        label_sensor->setGeometry(QRect(70, 20, 61, 16));
        label_sensor->setFont(font2);
        label_sensor->setStyleSheet(QStringLiteral("background: transparent;"));
        label_sensorValue = new QLabel(OSHaxiswca);
        label_sensorValue->setObjectName(QStringLiteral("label_sensorValue"));
        label_sensorValue->setGeometry(QRect(130, 20, 41, 16));
        label_sensorValue->setFont(font2);
        label_sensorValue->setStyleSheet(QStringLiteral("background: transparent;"));
        AxisValue->raise();
        sensorValue->raise();
        lineEdit_MinCalib->raise();
        lineEdit_MaxCalib->raise();
        label_MinCalib->raise();
        label_MaxCalib->raise();
        checkBox_AutoCalib->raise();
        label_axis->raise();
        label_axisValue->raise();
        label_sensor->raise();
        label_sensorValue->raise();

        retranslateUi(OSHaxiswca);

        QMetaObject::connectSlotsByName(OSHaxiswca);
    } // setupUi

    void retranslateUi(QWidget *OSHaxiswca)
    {
        OSHaxiswca->setWindowTitle(QApplication::translate("OSHaxiswca", "Form", nullptr));
        AxisValue->setFormat(QApplication::translate("OSHaxiswca", "%v", nullptr));
        lineEdit_MinCalib->setInputMask(QApplication::translate("OSHaxiswca", "9999", nullptr));
        lineEdit_MaxCalib->setInputMask(QApplication::translate("OSHaxiswca", "9999", nullptr));
        label_MinCalib->setText(QApplication::translate("OSHaxiswca", "MinCalib", nullptr));
        label_MaxCalib->setText(QApplication::translate("OSHaxiswca", "MaxCalib", nullptr));
        checkBox_AutoCalib->setText(QApplication::translate("OSHaxiswca", "AutoCalibration", nullptr));
        sensorValue->setFormat(QApplication::translate("OSHaxiswca", "%v", nullptr));
        label_axis->setText(QApplication::translate("OSHaxiswca", "Axis Value:", nullptr));
        label_axisValue->setText(QApplication::translate("OSHaxiswca", "0", nullptr));
        label_sensor->setText(QApplication::translate("OSHaxiswca", "Sensor Value:", nullptr));
        label_sensorValue->setText(QApplication::translate("OSHaxiswca", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OSHaxiswca: public Ui_OSHaxiswca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSHAXISWCA_H
