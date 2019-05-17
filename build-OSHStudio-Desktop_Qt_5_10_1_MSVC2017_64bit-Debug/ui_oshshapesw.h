/********************************************************************************
** Form generated from reading UI file 'oshshapesw.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSHSHAPESW_H
#define UI_OSHSHAPESW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oshshapesw
{
public:

    void setupUi(QWidget *oshshapesw)
    {
        if (oshshapesw->objectName().isEmpty())
            oshshapesw->setObjectName(QStringLiteral("oshshapesw"));
        oshshapesw->resize(221, 206);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(oshshapesw->sizePolicy().hasHeightForWidth());
        oshshapesw->setSizePolicy(sizePolicy);
        oshshapesw->setMouseTracking(false);

        retranslateUi(oshshapesw);

        QMetaObject::connectSlotsByName(oshshapesw);
    } // setupUi

    void retranslateUi(QWidget *oshshapesw)
    {
        oshshapesw->setWindowTitle(QApplication::translate("oshshapesw", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class oshshapesw: public Ui_oshshapesw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSHSHAPESW_H
