/********************************************************************************
** Form generated from reading UI file 'digicode.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGICODE_H
#define UI_DIGICODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_digicode
{
public:

    void setupUi(QWidget *digicode)
    {
        if (digicode->objectName().isEmpty())
            digicode->setObjectName(QString::fromUtf8("digicode"));
        digicode->resize(800, 600);
        QFont font;
        font.setPointSize(36);
        digicode->setFont(font);

        retranslateUi(digicode);

        QMetaObject::connectSlotsByName(digicode);
    } // setupUi

    void retranslateUi(QWidget *digicode)
    {
        digicode->setWindowTitle(QCoreApplication::translate("digicode", "Digicode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class digicode: public Ui_digicode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGICODE_H
