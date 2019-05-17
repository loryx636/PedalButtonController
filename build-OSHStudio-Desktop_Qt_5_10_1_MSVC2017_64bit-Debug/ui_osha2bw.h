/********************************************************************************
** Form generated from reading UI file 'osha2bw.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSHA2BW_H
#define UI_OSHA2BW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_osha2bw
{
public:
    QProgressBar *AxisValue;
    QSpinBox *spinBox;
    QLabel *label_intervalCnt;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_MinValue;
    QLabel *label_MaxValue;
    QLabel *label_pinName;

    void setupUi(QWidget *osha2bw)
    {
        if (osha2bw->objectName().isEmpty())
            osha2bw->setObjectName(QStringLiteral("osha2bw"));
        osha2bw->resize(690, 32);
        AxisValue = new QProgressBar(osha2bw);
        AxisValue->setObjectName(QStringLiteral("AxisValue"));
        AxisValue->setGeometry(QRect(60, 20, 491, 8));
        QFont font;
        font.setPointSize(6);
        AxisValue->setFont(font);
        AxisValue->setMaximum(4095);
        AxisValue->setValue(0);
        AxisValue->setAlignment(Qt::AlignCenter);
        AxisValue->setTextVisible(false);
        spinBox = new QSpinBox(osha2bw);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(570, 0, 42, 22));
        spinBox->setMouseTracking(false);
        spinBox->setMinimum(1);
        spinBox->setMaximum(10);
        label_intervalCnt = new QLabel(osha2bw);
        label_intervalCnt->setObjectName(QStringLiteral("label_intervalCnt"));
        label_intervalCnt->setGeometry(QRect(620, -10, 71, 41));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_intervalCnt->setFont(font1);
        label_intervalCnt->setWordWrap(true);
        label_1 = new QLabel(osha2bw);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(60, 20, 21, 16));
        label_1->setFont(font);
        label_1->setAutoFillBackground(false);
        label_1->setStyleSheet(QStringLiteral("background:transparent"));
        label_1->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(osha2bw);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 20, 21, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("background:transparent"));
        label_2->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(osha2bw);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(500, 20, 21, 16));
        label_10->setFont(font);
        label_10->setStyleSheet(QStringLiteral("background:transparent"));
        label_10->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(osha2bw);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 20, 21, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("background:transparent"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(osha2bw);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 20, 21, 16));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("background:transparent"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(osha2bw);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(280, 20, 21, 16));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("background:transparent"));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(osha2bw);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(330, 20, 21, 16));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("background:transparent"));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(osha2bw);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(380, 20, 21, 16));
        label_7->setFont(font);
        label_7->setStyleSheet(QStringLiteral("background:transparent"));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(osha2bw);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(420, 20, 21, 16));
        label_8->setFont(font);
        label_8->setStyleSheet(QStringLiteral("background:transparent"));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(osha2bw);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(460, 20, 21, 16));
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral("background:transparent"));
        label_9->setAlignment(Qt::AlignCenter);
        label_MinValue = new QLabel(osha2bw);
        label_MinValue->setObjectName(QStringLiteral("label_MinValue"));
        label_MinValue->setGeometry(QRect(30, 20, 20, 20));
        label_MinValue->setFont(font);
        label_MinValue->setAutoFillBackground(false);
        label_MinValue->setStyleSheet(QStringLiteral("background:transparent"));
        label_MinValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_MaxValue = new QLabel(osha2bw);
        label_MaxValue->setObjectName(QStringLiteral("label_MaxValue"));
        label_MaxValue->setGeometry(QRect(560, 20, 21, 16));
        label_MaxValue->setFont(font);
        label_MaxValue->setAutoFillBackground(false);
        label_MaxValue->setStyleSheet(QStringLiteral("background:transparent"));
        label_MaxValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_pinName = new QLabel(osha2bw);
        label_pinName->setObjectName(QStringLiteral("label_pinName"));
        label_pinName->setGeometry(QRect(10, -4, 31, 20));
        label_pinName->setFont(font1);
        label_pinName->setWordWrap(false);

        retranslateUi(osha2bw);

        QMetaObject::connectSlotsByName(osha2bw);
    } // setupUi

    void retranslateUi(QWidget *osha2bw)
    {
        osha2bw->setWindowTitle(QApplication::translate("osha2bw", "Form", nullptr));
        AxisValue->setFormat(QApplication::translate("osha2bw", "%v", nullptr));
        label_intervalCnt->setText(QApplication::translate("osha2bw", "<html><head/><body><p>Number of Buttons</p></body></html>", nullptr));
        label_1->setText(QApplication::translate("osha2bw", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("osha2bw", "TextLabel", nullptr));
        label_10->setText(QApplication::translate("osha2bw", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("osha2bw", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("osha2bw", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("osha2bw", "TextLabel", nullptr));
        label_6->setText(QApplication::translate("osha2bw", "TextLabel", nullptr));
        label_7->setText(QApplication::translate("osha2bw", "TextLabel", nullptr));
        label_8->setText(QApplication::translate("osha2bw", "TextLabel", nullptr));
        label_9->setText(QApplication::translate("osha2bw", "TextLabel", nullptr));
        label_MinValue->setText(QApplication::translate("osha2bw", "0", nullptr));
        label_MaxValue->setText(QApplication::translate("osha2bw", "255", nullptr));
        label_pinName->setText(QApplication::translate("osha2bw", "pin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class osha2bw: public Ui_osha2bw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSHA2BW_H
