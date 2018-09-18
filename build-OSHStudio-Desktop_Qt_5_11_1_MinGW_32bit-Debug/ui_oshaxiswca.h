/********************************************************************************
** Form generated from reading UI file 'oshaxiswca.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSHAXISWCA_H
#define UI_OSHAXISWCA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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
    QLabel *label;
    QLabel *label_2;
    QCheckBox *checkBox_AutoCalib;

    void setupUi(QWidget *OSHaxiswca)
    {
        if (OSHaxiswca->objectName().isEmpty())
            OSHaxiswca->setObjectName(QStringLiteral("OSHaxiswca"));
        OSHaxiswca->resize(750, 40);
        AxisValue = new QProgressBar(OSHaxiswca);
        AxisValue->setObjectName(QStringLiteral("AxisValue"));
        AxisValue->setGeometry(QRect(60, 20, 491, 8));
        QFont font;
        font.setPointSize(6);
        AxisValue->setFont(font);
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
        label = new QLabel(OSHaxiswca);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 20, 41, 21));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setWordWrap(true);
        label_2 = new QLabel(OSHaxiswca);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(570, 20, 71, 21));
        label_2->setWordWrap(true);
        checkBox_AutoCalib = new QCheckBox(OSHaxiswca);
        checkBox_AutoCalib->setObjectName(QStringLiteral("checkBox_AutoCalib"));
        checkBox_AutoCalib->setGeometry(QRect(640, 0, 111, 17));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        checkBox_AutoCalib->setFont(font1);

        retranslateUi(OSHaxiswca);

        QMetaObject::connectSlotsByName(OSHaxiswca);
    } // setupUi

    void retranslateUi(QWidget *OSHaxiswca)
    {
        OSHaxiswca->setWindowTitle(QApplication::translate("OSHaxiswca", "Form", nullptr));
        AxisValue->setFormat(QApplication::translate("OSHaxiswca", "%v", nullptr));
        lineEdit_MinCalib->setInputMask(QApplication::translate("OSHaxiswca", "9999", nullptr));
        lineEdit_MaxCalib->setInputMask(QApplication::translate("OSHaxiswca", "9999", nullptr));
        label->setText(QApplication::translate("OSHaxiswca", "MinCalib", nullptr));
        label_2->setText(QApplication::translate("OSHaxiswca", "MaxCalib", nullptr));
        checkBox_AutoCalib->setText(QApplication::translate("OSHaxiswca", "AutoCalibration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OSHaxiswca: public Ui_OSHaxiswca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSHAXISWCA_H
