/********************************************************************************
** Form generated from reading UI file 'equilibreuse.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUILIBREUSE_H
#define UI_EQUILIBREUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Equilibreuse
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QDial *dial_consigneVitesse;
    QLCDNumber *lcdNumber_consigne;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Arreter;
    QPushButton *pushButton_Lancer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Equilibreuse)
    {
        if (Equilibreuse->objectName().isEmpty())
            Equilibreuse->setObjectName(QString::fromUtf8("Equilibreuse"));
        Equilibreuse->resize(800, 600);
        centralwidget = new QWidget(Equilibreuse);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 81, 204, 136));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        dial_consigneVitesse = new QDial(widget);
        dial_consigneVitesse->setObjectName(QString::fromUtf8("dial_consigneVitesse"));

        horizontalLayout->addWidget(dial_consigneVitesse);

        lcdNumber_consigne = new QLCDNumber(widget);
        lcdNumber_consigne->setObjectName(QString::fromUtf8("lcdNumber_consigne"));

        horizontalLayout->addWidget(lcdNumber_consigne);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_Arreter = new QPushButton(widget);
        pushButton_Arreter->setObjectName(QString::fromUtf8("pushButton_Arreter"));

        horizontalLayout_2->addWidget(pushButton_Arreter);

        pushButton_Lancer = new QPushButton(widget);
        pushButton_Lancer->setObjectName(QString::fromUtf8("pushButton_Lancer"));

        horizontalLayout_2->addWidget(pushButton_Lancer);


        verticalLayout->addLayout(horizontalLayout_2);

        Equilibreuse->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Equilibreuse);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Equilibreuse->setMenuBar(menubar);
        statusbar = new QStatusBar(Equilibreuse);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Equilibreuse->setStatusBar(statusbar);

        retranslateUi(Equilibreuse);
        QObject::connect(dial_consigneVitesse, SIGNAL(valueChanged(int)), lcdNumber_consigne, SLOT(display(int)));

        QMetaObject::connectSlotsByName(Equilibreuse);
    } // setupUi

    void retranslateUi(QMainWindow *Equilibreuse)
    {
        Equilibreuse->setWindowTitle(QCoreApplication::translate("Equilibreuse", "Equilibreuse", nullptr));
        pushButton_Arreter->setText(QCoreApplication::translate("Equilibreuse", "Lancer Moteur", nullptr));
        pushButton_Lancer->setText(QCoreApplication::translate("Equilibreuse", "Arr\303\252ter Moteur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Equilibreuse: public Ui_Equilibreuse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUILIBREUSE_H
