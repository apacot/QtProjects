/********************************************************************************
** Form generated from reading UI file 'dab_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAB_MAINWINDOW_H
#define UI_DAB_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DAB_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *PushButtonConnexion;
    QLabel *labelEtatConnexion;
    QLabel *labelMessageBanque;
    QLineEdit *lineEditMessageBanque;
    QGroupBox *groupBox;
    QPushButton *pushButtonEnvoi;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButtonNumCompte;
    QLabel *labelMontant;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEditNumCompte;
    QLineEdit *lineEditMontant;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioButtonSolde;
    QRadioButton *radioButtonRetrait;
    QRadioButton *radioButtonDepot;
    QListWidget *listWidgetEtaConnexion;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *LabelIP;
    QSpacerItem *verticalSpacer_2;
    QLabel *LabelPort;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditIP;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEditPort;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DAB_MainWindow)
    {
        if (DAB_MainWindow->objectName().isEmpty())
            DAB_MainWindow->setObjectName(QString::fromUtf8("DAB_MainWindow"));
        DAB_MainWindow->resize(675, 542);
        centralwidget = new QWidget(DAB_MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        PushButtonConnexion = new QPushButton(centralwidget);
        PushButtonConnexion->setObjectName(QString::fromUtf8("PushButtonConnexion"));
        PushButtonConnexion->setGeometry(QRect(110, 120, 80, 24));
        labelEtatConnexion = new QLabel(centralwidget);
        labelEtatConnexion->setObjectName(QString::fromUtf8("labelEtatConnexion"));
        labelEtatConnexion->setGeometry(QRect(270, 30, 120, 16));
        labelMessageBanque = new QLabel(centralwidget);
        labelMessageBanque->setObjectName(QString::fromUtf8("labelMessageBanque"));
        labelMessageBanque->setGeometry(QRect(30, 190, 141, 16));
        lineEditMessageBanque = new QLineEdit(centralwidget);
        lineEditMessageBanque->setObjectName(QString::fromUtf8("lineEditMessageBanque"));
        lineEditMessageBanque->setEnabled(false);
        lineEditMessageBanque->setGeometry(QRect(30, 220, 631, 24));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 260, 631, 191));
        pushButtonEnvoi = new QPushButton(groupBox);
        pushButtonEnvoi->setObjectName(QString::fromUtf8("pushButtonEnvoi"));
        pushButtonEnvoi->setEnabled(false);
        pushButtonEnvoi->setGeometry(QRect(451, 147, 91, 24));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 40, 259, 58));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButtonNumCompte = new QPushButton(widget);
        pushButtonNumCompte->setObjectName(QString::fromUtf8("pushButtonNumCompte"));
        pushButtonNumCompte->setEnabled(false);

        verticalLayout_4->addWidget(pushButtonNumCompte);

        labelMontant = new QLabel(widget);
        labelMontant->setObjectName(QString::fromUtf8("labelMontant"));

        verticalLayout_4->addWidget(labelMontant);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lineEditNumCompte = new QLineEdit(widget);
        lineEditNumCompte->setObjectName(QString::fromUtf8("lineEditNumCompte"));

        verticalLayout_3->addWidget(lineEditNumCompte);

        lineEditMontant = new QLineEdit(widget);
        lineEditMontant->setObjectName(QString::fromUtf8("lineEditMontant"));

        verticalLayout_3->addWidget(lineEditMontant);


        horizontalLayout_2->addLayout(verticalLayout_3);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(460, 60, 68, 80));
        verticalLayout_5 = new QVBoxLayout(widget1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        radioButtonSolde = new QRadioButton(widget1);
        radioButtonSolde->setObjectName(QString::fromUtf8("radioButtonSolde"));

        verticalLayout_5->addWidget(radioButtonSolde);

        radioButtonRetrait = new QRadioButton(widget1);
        radioButtonRetrait->setObjectName(QString::fromUtf8("radioButtonRetrait"));

        verticalLayout_5->addWidget(radioButtonRetrait);

        radioButtonDepot = new QRadioButton(widget1);
        radioButtonDepot->setObjectName(QString::fromUtf8("radioButtonDepot"));

        verticalLayout_5->addWidget(radioButtonDepot);

        listWidgetEtaConnexion = new QListWidget(centralwidget);
        listWidgetEtaConnexion->setObjectName(QString::fromUtf8("listWidgetEtaConnexion"));
        listWidgetEtaConnexion->setGeometry(QRect(270, 50, 391, 151));
        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(30, 30, 213, 77));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        LabelIP = new QLabel(widget2);
        LabelIP->setObjectName(QString::fromUtf8("LabelIP"));

        verticalLayout_2->addWidget(LabelIP);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        LabelPort = new QLabel(widget2);
        LabelPort->setObjectName(QString::fromUtf8("LabelPort"));

        verticalLayout_2->addWidget(LabelPort);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEditIP = new QLineEdit(widget2);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));

        verticalLayout->addWidget(lineEditIP);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        lineEditPort = new QLineEdit(widget2);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));

        verticalLayout->addWidget(lineEditPort);


        horizontalLayout->addLayout(verticalLayout);

        DAB_MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DAB_MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 675, 21));
        DAB_MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DAB_MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DAB_MainWindow->setStatusBar(statusbar);

        retranslateUi(DAB_MainWindow);

        QMetaObject::connectSlotsByName(DAB_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DAB_MainWindow)
    {
        DAB_MainWindow->setWindowTitle(QCoreApplication::translate("DAB_MainWindow", "DAB_MainWindow", nullptr));
        PushButtonConnexion->setText(QCoreApplication::translate("DAB_MainWindow", "Connexion", nullptr));
        labelEtatConnexion->setText(QCoreApplication::translate("DAB_MainWindow", "Etat de la connexion", nullptr));
        labelMessageBanque->setText(QCoreApplication::translate("DAB_MainWindow", "Message de la banque :", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DAB_MainWindow", "Op\303\251rations envoy\303\251es  \303\240 la banque", nullptr));
        pushButtonEnvoi->setText(QCoreApplication::translate("DAB_MainWindow", "Envoi", nullptr));
        pushButtonNumCompte->setText(QCoreApplication::translate("DAB_MainWindow", "Num\303\251ro de compte", nullptr));
        labelMontant->setText(QCoreApplication::translate("DAB_MainWindow", "TextLabel", nullptr));
        radioButtonSolde->setText(QCoreApplication::translate("DAB_MainWindow", "Solde", nullptr));
        radioButtonRetrait->setText(QCoreApplication::translate("DAB_MainWindow", "Retrait", nullptr));
        radioButtonDepot->setText(QCoreApplication::translate("DAB_MainWindow", "D\303\251pot", nullptr));
        LabelIP->setText(QCoreApplication::translate("DAB_MainWindow", "Adresse : ", nullptr));
        LabelPort->setText(QCoreApplication::translate("DAB_MainWindow", "Port :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DAB_MainWindow: public Ui_DAB_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAB_MAINWINDOW_H
