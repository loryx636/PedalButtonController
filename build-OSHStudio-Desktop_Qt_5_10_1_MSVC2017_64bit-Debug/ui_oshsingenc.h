/********************************************************************************
** Form generated from reading UI file 'oshsingenc.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSHSINGENC_H
#define UI_OSHSINGENC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oshsingenc
{
public:
    QComboBox *comboBox_SEB;
    QComboBox *comboBox_SEA;
    QLabel *label_SE2;
    QLabel *label_SE2_CPin;

    void setupUi(QWidget *oshsingenc)
    {
        if (oshsingenc->objectName().isEmpty())
            oshsingenc->setObjectName(QStringLiteral("oshsingenc"));
        oshsingenc->resize(199, 72);
        comboBox_SEB = new QComboBox(oshsingenc);
        comboBox_SEB->setObjectName(QStringLiteral("comboBox_SEB"));
        comboBox_SEB->setGeometry(QRect(98, 50, 101, 22));
        comboBox_SEA = new QComboBox(oshsingenc);
        comboBox_SEA->setObjectName(QStringLiteral("comboBox_SEA"));
        comboBox_SEA->setGeometry(QRect(98, 0, 101, 22));
        label_SE2 = new QLabel(oshsingenc);
        label_SE2->setObjectName(QStringLiteral("label_SE2"));
        label_SE2->setGeometry(QRect(-2, 0, 91, 71));
        label_SE2->setPixmap(QPixmap(QString::fromUtf8(":/Images/1053081_zps20151924.jpg")));
        label_SE2->setScaledContents(true);
        label_SE2_CPin = new QLabel(oshsingenc);
        label_SE2_CPin->setObjectName(QStringLiteral("label_SE2_CPin"));
        label_SE2_CPin->setGeometry(QRect(100, 30, 47, 13));

        retranslateUi(oshsingenc);

        QMetaObject::connectSlotsByName(oshsingenc);
    } // setupUi

    void retranslateUi(QWidget *oshsingenc)
    {
        oshsingenc->setWindowTitle(QApplication::translate("oshsingenc", "Form", nullptr));
        label_SE2->setText(QString());
        label_SE2_CPin->setText(QApplication::translate("oshsingenc", "+3.3V", nullptr));
    } // retranslateUi

};

namespace Ui {
    class oshsingenc: public Ui_oshsingenc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSHSINGENC_H
