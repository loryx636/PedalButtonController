/********************************************************************************
** Form generated from reading UI file 'oshbuttonw.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSHBUTTONW_H
#define UI_OSHBUTTONW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oshbuttonw
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *oshbuttonw)
    {
        if (oshbuttonw->objectName().isEmpty())
            oshbuttonw->setObjectName(QStringLiteral("oshbuttonw"));
        oshbuttonw->resize(51, 51);
        pushButton = new QPushButton(oshbuttonw);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 51, 51));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QStringLiteral("image: url(:/Images/OFF_small_t.png);"));
        pushButton->setFlat(true);

        retranslateUi(oshbuttonw);

        QMetaObject::connectSlotsByName(oshbuttonw);
    } // setupUi

    void retranslateUi(QWidget *oshbuttonw)
    {
        oshbuttonw->setWindowTitle(QApplication::translate("oshbuttonw", "Form", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class oshbuttonw: public Ui_oshbuttonw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSHBUTTONW_H
