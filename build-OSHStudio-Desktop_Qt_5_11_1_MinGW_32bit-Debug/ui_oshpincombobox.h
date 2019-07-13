/********************************************************************************
** Form generated from reading UI file 'oshpincombobox.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSHPINCOMBOBOX_H
#define UI_OSHPINCOMBOBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oshpincombobox
{
public:
    QComboBox *comboBox;

    void setupUi(QWidget *oshpincombobox)
    {
        if (oshpincombobox->objectName().isEmpty())
            oshpincombobox->setObjectName(QStringLiteral("oshpincombobox"));
        oshpincombobox->resize(170, 21);
        comboBox = new QComboBox(oshpincombobox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(0, 0, 171, 21));
        comboBox->setMaxVisibleItems(30);

        retranslateUi(oshpincombobox);

        QMetaObject::connectSlotsByName(oshpincombobox);
    } // setupUi

    void retranslateUi(QWidget *oshpincombobox)
    {
        oshpincombobox->setWindowTitle(QApplication::translate("oshpincombobox", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class oshpincombobox: public Ui_oshpincombobox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSHPINCOMBOBOX_H
