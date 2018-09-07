#include "oshstudio.h"
#include "ui_oshstudio.h"
#include<QMessageBox>

extern uint8_t Total_Single_encoders;
extern struct single_encoders_pins single_encoders_store[14];

void OSHStudio::loadFromFile()
{
    QString line;
    QString value;
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open Config File"), "",
        tr("OSH Config Files (*.osh);;All Files (*)"));

    if (fileName.isEmpty())
            return;
        else {
            QFile file(fileName);
                if (!file.open(QIODevice::ReadOnly)) {
                QMessageBox::information(this, tr("Unable to open file"),
                    file.errorString());
                return;
                }
            QTextStream in(&file);

            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB0->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB1->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB2->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB3->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB4->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB5->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB6->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB7->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB8->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB9->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB10->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB11->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB12->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB13->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB14->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB15->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB16->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB17->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB18->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB19->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB20->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB21->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB22->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB23->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB24->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB25->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB26->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB27->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB28->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB29->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB30->set_current_index(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_PB31->set_current_index(value.toUInt());


            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis1->setMinCalibValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis1->setMaxCalibValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis1->setAutoCalib(value.toUInt());

            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis2->setMinCalibValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis2->setMaxCalibValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis2->setAutoCalib(value.toUInt());

            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis3->setMinCalibValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis3->setMaxCalibValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis3->setAutoCalib(value.toUInt());

            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis4->setMinCalibValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis4->setMaxCalibValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis4->setAutoCalib(value.toUInt());

            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis5->setMinCalibValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis5->setMaxCalibValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis5->setAutoCalib(value.toUInt());

            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis6->setMinCalibValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis6->setMaxCalibValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axis6->setAutoCalib(value.toUInt());

            line = in.readLine();
            value = line.section('=',1,1);
            ui->checkBox_AxisComb->setChecked(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axisComb1->setMinCalibValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axisComb1->setMaxCalibValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axisComb2->setMinCalibValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axisComb2->setMaxCalibValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axisComb1->setAutoCalib(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->widget_axisComb2->setAutoCalib(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->radioButtonCoopwoork->setChecked(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->radioButtonEachonhisown->setChecked(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->horizontalSliderAxisComb->setValue(value.toUInt());

            line = in.readLine();
            value = line.section('=',1,1);
            ui->horiSlider_A2B->setValue(value.toUInt());


            line = in.readLine();
            value = line.section('=',1,1);
            if (value.toUInt() & 0x1) ui->checkBox_POV1->setChecked(true);
                    else ui->checkBox_POV1->setChecked(false);
            if (value.toUInt() & 0x2) ui->checkBox_POV2->setChecked(true);
                    else ui->checkBox_POV2->setChecked(false);
            if (value.toUInt() & 0x4) ui->checkBox_POV3->setChecked(true);
                    else ui->checkBox_POV3->setChecked(false);
            if (value.toUInt() & 0x8) ui->checkBox_POV4->setChecked(true);
                    else ui->checkBox_POV4->setChecked(false);

            line = in.readLine();
            value = line.section('=',1,1);
            ui->lineEdit_Device_ident->setText(value);
//            line = in.readLine();
//            value = line.section('=',1,1);
//            ui->lineEdit_Serial_Number->setText(value);
            line = in.readLine();
            value = line.section('=',1,1);
            ui->spinBox_USB_exchange->setValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->spinBox__Rot_Press_time->setValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->spinBox_RotSwitch_Press_time->setValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->spinBox_Rot_Debounce_time->setValue(value.toUInt());
            line = in.readLine();
            value = line.section('=',1,1);
            ui->spinBox_Button_Debounce_time->setValue(value.toUInt());

            line = in.readLine();
            value = line.section('=',1,1);
            Total_Single_encoders=value.toUInt();
            for (uint8_t i=0; i<14; i++) {
                line = in.readLine();
                value = line.section('=',1,1);
                single_encoders_store[i].pinA=value.toUInt();
                line = in.readLine();
                value = line.section('=',1,1);
                single_encoders_store[i].pinB=value.toUInt();
            }
            showSingleEncodersTab();

            file.close();
    }
}

void OSHStudio::saveToFile()
{
    QString fileName = QFileDialog::getSaveFileName(this,
        tr("Save Config File"), "",
        tr("OSH Config Files (*.osh);;All Files (*)"));

    if (fileName.isEmpty())
            return;
        else {
            QFile file(fileName);
            if (!file.open(QIODevice::WriteOnly)) {
                QMessageBox::information(this, tr("Unable to open file"),
                    file.errorString());
                return;
                }


    QTextStream out(&file);

    out << "A0=" << ui->widget_PB0->get_current_index() << "\n"
        << "A1=" << ui->widget_PB1->get_current_index() << "\n"
        << "A2=" << ui->widget_PB2->get_current_index() << "\n"
        << "A3=" << ui->widget_PB3->get_current_index() << "\n"
        << "A4=" << ui->widget_PB4->get_current_index() << "\n"
        << "A5=" << ui->widget_PB5->get_current_index() << "\n"
        << "A6=" << ui->widget_PB6->get_current_index() << "\n"
        << "A7=" << ui->widget_PB7->get_current_index() << "\n"
        << "A8=" << ui->widget_PB8->get_current_index() << "\n"
        << "A9=" << ui->widget_PB9->get_current_index() << "\n"
        << "A10=" << ui->widget_PB10->get_current_index() << "\n"
        << "A11=" << ui->widget_PB11->get_current_index() << "\n"
        << "A12=" << ui->widget_PB12->get_current_index() << "\n"
        << "A15=" << ui->widget_PB13->get_current_index() << "\n"
        << "B0=" << ui->widget_PB14->get_current_index() << "\n"
        << "B1=" << ui->widget_PB15->get_current_index() << "\n"
        << "B3=" << ui->widget_PB16->get_current_index() << "\n"
        << "B4=" << ui->widget_PB17->get_current_index() << "\n"
        << "B5=" << ui->widget_PB18->get_current_index() << "\n"
        << "B6=" << ui->widget_PB19->get_current_index() << "\n"
        << "B7=" << ui->widget_PB20->get_current_index() << "\n"
        << "B8=" << ui->widget_PB21->get_current_index() << "\n"
        << "B9=" << ui->widget_PB22->get_current_index() << "\n"
        << "B10=" << ui->widget_PB23->get_current_index() << "\n"
        << "B11=" << ui->widget_PB24->get_current_index() << "\n"
        << "B12=" << ui->widget_PB25->get_current_index() << "\n"
        << "B13=" << ui->widget_PB26->get_current_index() << "\n"
        << "B14=" << ui->widget_PB27->get_current_index() << "\n"
        << "B15=" << ui->widget_PB28->get_current_index() << "\n"
        << "C13=" << ui->widget_PB29->get_current_index() << "\n"
        << "C14=" << ui->widget_PB30->get_current_index() << "\n"
        << "C15=" << ui->widget_PB31->get_current_index() << "\n"

        << "Axis1Min=" << ui->widget_axis1->LeftPinValue() << "\n"
        << "Axis1Max=" << ui->widget_axis1->RightPinValue() << "\n"
        << "Axis1Func=" << ui->widget_axis1->isAutoCalibEnabled()  << "\n"

        << "Axis2Min=" << ui->widget_axis2->LeftPinValue() << "\n"
        << "Axis2Max=" << ui->widget_axis2->RightPinValue() << "\n"
        << "Axis2Func=" << ui->widget_axis2->isAutoCalibEnabled()  << "\n"

        << "Axis3Min=" << ui->widget_axis3->LeftPinValue() << "\n"
        << "Axis3Max=" << ui->widget_axis3->RightPinValue() << "\n"
        << "Axis3Func="<< ui->widget_axis3->isAutoCalibEnabled()   << "\n"

        << "Axis4Min=" << ui->widget_axis4->LeftPinValue() << "\n"
        << "Axis4Max=" << ui->widget_axis4->RightPinValue() << "\n"
        << "Axis4Func="<< ui->widget_axis4->isAutoCalibEnabled()   << "\n"

        << "Axis5Min=" << ui->widget_axis5->LeftPinValue() << "\n"
        << "axis5Max=" << ui->widget_axis5->RightPinValue() << "\n"
        << "Axis5Func="<< ui->widget_axis5->isAutoCalibEnabled()   << "\n"

        << "Axis6Min=" << ui->widget_axis6->LeftPinValue() << "\n"
        << "Axis6Max=" << ui->widget_axis6->RightPinValue() << "\n"
        << "Axis6Func="<< ui->widget_axis6->isAutoCalibEnabled()   << "\n"

        << "ComboAxis=" << ui->checkBox_AxisComb->isChecked() << "\n"
        << "ComboAxisPin1Min=" << ui->widget_axisComb1->LeftPinValue() << "\n"
        << "ComboAxisPin1Max=" << ui->widget_axisComb1->RightPinValue() << "\n"
        << "ComboAxisPin2Min=" << ui->widget_axisComb2->LeftPinValue() << "\n"
        << "ComboAxisPin2Max=" << ui->widget_axisComb2->RightPinValue() << "\n"
        << "ComboAxisPin1AC=" << ui->widget_axisComb1->isAutoCalibEnabled() << "\n"
        << "ComboAxisPin2AC=" << ui->widget_axisComb2->isAutoCalibEnabled() << "\n"
        << "ComboAxisCoop=" << ui->radioButtonCoopwoork->isChecked() << "\n"
        << "ComboAxisSep=" << ui->radioButtonEachonhisown->isChecked() << "\n"
        << "ComboAxisSlid=" << ui->horizontalSliderAxisComb->value() << "\n"
        << "Analog2ButtonThresh=" << ui->horiSlider_A2B->value() << "\n";

    int POVConf=0;
    if (ui->checkBox_POV1->isChecked()) POVConf|=0x1;
    if (ui->checkBox_POV2->isChecked()) POVConf|=0x2;
    if (ui->checkBox_POV3->isChecked()) POVConf|=0x4;
    if (ui->checkBox_POV4->isChecked()) POVConf|=0x8;
     out << "POVConfig=" << POVConf << "\n";

     out << "USB_custom_string=" << ui->lineEdit_Device_ident->text() << "\n"
//         << "USB_serial_number=" << ui->lineEdit_Serial_Number->text() << "\n"
         << "USB_poll_interval=" << ui->spinBox_USB_exchange->value() << "\n"
         << "Encoders_press_time=" << ui->spinBox__Rot_Press_time->value() << "\n"
         << "RotSwitch_press_time="<< ui->spinBox_RotSwitch_Press_time->value() << "\n"
         << "Encoders_debounce=" << ui->spinBox_Rot_Debounce_time->value() << "\n"
         << "Buttons_debounce=" << ui->spinBox_Button_Debounce_time->value() << "\n";

     out << "Total_Single_Encoders=" << Total_Single_encoders << "\n"
         << "1st_pinA=" << single_encoders_store[0].pinA << "\n"
         << "1st_pinB=" << single_encoders_store[0].pinB << "\n"
         << "2nd_pinA=" << single_encoders_store[1].pinA << "\n"
         << "2nd_pinB=" << single_encoders_store[1].pinB << "\n"
         << "3rd_pinA=" << single_encoders_store[2].pinA << "\n"
         << "3rd_pinB=" << single_encoders_store[2].pinB << "\n"
         << "4th_pinA=" << single_encoders_store[3].pinA << "\n"
         << "4th_pinB=" << single_encoders_store[3].pinB << "\n"
         << "5th_pinA=" << single_encoders_store[4].pinA << "\n"
         << "5th_pinB=" << single_encoders_store[4].pinB << "\n"
         << "6th_pinA=" << single_encoders_store[5].pinA << "\n"
         << "6th_pinB=" << single_encoders_store[5].pinB << "\n"
         << "7th_pinA=" << single_encoders_store[6].pinA << "\n"
         << "7th_pinB=" << single_encoders_store[6].pinB << "\n"
         << "8th_pinA=" << single_encoders_store[7].pinA << "\n"
         << "8th_pinB=" << single_encoders_store[7].pinB << "\n"
         << "9th_pinA=" << single_encoders_store[8].pinA << "\n"
         << "9th_pinB=" << single_encoders_store[8].pinB << "\n"
         << "10th_pinA=" << single_encoders_store[9].pinA << "\n"
         << "10th_pinB=" << single_encoders_store[9].pinB << "\n"
         << "11th_pinA=" << single_encoders_store[10].pinA << "\n"
         << "11th_pinB=" << single_encoders_store[10].pinB << "\n"
         << "12th_pinA=" << single_encoders_store[11].pinA << "\n"
         << "12th_pinB=" << single_encoders_store[11].pinB << "\n"
         << "13th_pinA=" << single_encoders_store[12].pinA << "\n"
         << "13th_pinB=" << single_encoders_store[12].pinB << "\n"
         << "14th_pinA=" << single_encoders_store[13].pinA << "\n"
         << "14th_pinB=" << single_encoders_store[13].pinB << "\n";

       file.close();
    }
}
