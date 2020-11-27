/********************************************************************************
** Form generated from reading UI file 'porte.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTE_H
#define UI_PORTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Porte
{
public:
    QLabel *labelEtatPorte;
    QLabel *labelImagePorte;

    void setupUi(QWidget *Porte)
    {
        if (Porte->objectName().isEmpty())
            Porte->setObjectName(QString::fromUtf8("Porte"));
        Porte->resize(400, 300);
        labelEtatPorte = new QLabel(Porte);
        labelEtatPorte->setObjectName(QString::fromUtf8("labelEtatPorte"));
        labelEtatPorte->setGeometry(QRect(60, 225, 211, 31));
        labelImagePorte = new QLabel(Porte);
        labelImagePorte->setObjectName(QString::fromUtf8("labelImagePorte"));
        labelImagePorte->setGeometry(QRect(60, 30, 111, 171));
        labelImagePorte->setPixmap(QPixmap(QString::fromUtf8(":/img/porte_fermee.png")));

        retranslateUi(Porte);

        QMetaObject::connectSlotsByName(Porte);
    } // setupUi

    void retranslateUi(QWidget *Porte)
    {
        Porte->setWindowTitle(QCoreApplication::translate("Porte", "Form", nullptr));
        labelEtatPorte->setText(QCoreApplication::translate("Porte", "La porte est verrouill\303\251e", nullptr));
        labelImagePorte->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Porte: public Ui_Porte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTE_H
