/********************************************************************************
** Form generated from reading UI file 'clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWidget
{
public:
    QGroupBox *groupBox;
    QLabel *labelEtatConnexion;
    QTextEdit *textEditEtatConnexion;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelIpServeur;
    QLineEdit *lineEditIpServeur;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPortServeur;
    QLineEdit *lineEditPortServeur;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonQuitter;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonConnexion;
    QGroupBox *groupBox_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButtonNomOrdiDistant;
    QPushButton *pushButtonNomUtilisateur;
    QPushButton *pushButtonArchitectProcess;
    QPushButton *pushButtonOsOrdi;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEditNomOrdiDist;
    QLineEdit *lineEditNomUser;
    QLineEdit *lineEditArchitectProco;
    QLineEdit *lineEditOsOrdi;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QString::fromUtf8("ClientWidget"));
        ClientWidget->resize(800, 600);
        groupBox = new QGroupBox(ClientWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 561, 161));
        labelEtatConnexion = new QLabel(groupBox);
        labelEtatConnexion->setObjectName(QString::fromUtf8("labelEtatConnexion"));
        labelEtatConnexion->setGeometry(QRect(330, 50, 131, 16));
        textEditEtatConnexion = new QTextEdit(groupBox);
        textEditEtatConnexion->setObjectName(QString::fromUtf8("textEditEtatConnexion"));
        textEditEtatConnexion->setGeometry(QRect(330, 70, 211, 61));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(17, 40, 304, 94));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelIpServeur = new QLabel(widget);
        labelIpServeur->setObjectName(QString::fromUtf8("labelIpServeur"));

        horizontalLayout->addWidget(labelIpServeur);

        lineEditIpServeur = new QLineEdit(widget);
        lineEditIpServeur->setObjectName(QString::fromUtf8("lineEditIpServeur"));

        horizontalLayout->addWidget(lineEditIpServeur);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelPortServeur = new QLabel(widget);
        labelPortServeur->setObjectName(QString::fromUtf8("labelPortServeur"));

        horizontalLayout_2->addWidget(labelPortServeur);

        lineEditPortServeur = new QLineEdit(widget);
        lineEditPortServeur->setObjectName(QString::fromUtf8("lineEditPortServeur"));

        horizontalLayout_2->addWidget(lineEditPortServeur);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButtonQuitter = new QPushButton(widget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));

        horizontalLayout_3->addWidget(pushButtonQuitter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonConnexion = new QPushButton(widget);
        pushButtonConnexion->setObjectName(QString::fromUtf8("pushButtonConnexion"));

        horizontalLayout_3->addWidget(pushButtonConnexion);


        verticalLayout_2->addLayout(horizontalLayout_3);

        groupBox_2 = new QGroupBox(ClientWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 200, 561, 161));
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 30, 521, 118));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButtonNomOrdiDistant = new QPushButton(widget1);
        pushButtonNomOrdiDistant->setObjectName(QString::fromUtf8("pushButtonNomOrdiDistant"));

        verticalLayout_4->addWidget(pushButtonNomOrdiDistant);

        pushButtonNomUtilisateur = new QPushButton(widget1);
        pushButtonNomUtilisateur->setObjectName(QString::fromUtf8("pushButtonNomUtilisateur"));

        verticalLayout_4->addWidget(pushButtonNomUtilisateur);

        pushButtonArchitectProcess = new QPushButton(widget1);
        pushButtonArchitectProcess->setObjectName(QString::fromUtf8("pushButtonArchitectProcess"));

        verticalLayout_4->addWidget(pushButtonArchitectProcess);

        pushButtonOsOrdi = new QPushButton(widget1);
        pushButtonOsOrdi->setObjectName(QString::fromUtf8("pushButtonOsOrdi"));

        verticalLayout_4->addWidget(pushButtonOsOrdi);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lineEditNomOrdiDist = new QLineEdit(widget1);
        lineEditNomOrdiDist->setObjectName(QString::fromUtf8("lineEditNomOrdiDist"));

        verticalLayout_3->addWidget(lineEditNomOrdiDist);

        lineEditNomUser = new QLineEdit(widget1);
        lineEditNomUser->setObjectName(QString::fromUtf8("lineEditNomUser"));

        verticalLayout_3->addWidget(lineEditNomUser);

        lineEditArchitectProco = new QLineEdit(widget1);
        lineEditArchitectProco->setObjectName(QString::fromUtf8("lineEditArchitectProco"));

        verticalLayout_3->addWidget(lineEditArchitectProco);

        lineEditOsOrdi = new QLineEdit(widget1);
        lineEditOsOrdi->setObjectName(QString::fromUtf8("lineEditOsOrdi"));

        verticalLayout_3->addWidget(lineEditOsOrdi);


        horizontalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(ClientWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ClientWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QCoreApplication::translate("ClientWidget", "ClientWidget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ClientWidget", "Connexion au serveur", nullptr));
        labelEtatConnexion->setText(QCoreApplication::translate("ClientWidget", "Etat de la connexion :", nullptr));
        labelIpServeur->setText(QCoreApplication::translate("ClientWidget", "Adresse IP du serveur :", nullptr));
        labelPortServeur->setText(QCoreApplication::translate("ClientWidget", "Num\303\251ro de port du serveur :", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("ClientWidget", "Quitter", nullptr));
        pushButtonConnexion->setText(QCoreApplication::translate("ClientWidget", "Connexion", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ClientWidget", "Informations Client", nullptr));
        pushButtonNomOrdiDistant->setText(QCoreApplication::translate("ClientWidget", "Nom de l'ordinateur distant", nullptr));
        pushButtonNomUtilisateur->setText(QCoreApplication::translate("ClientWidget", "Nom de l'utilisateur", nullptr));
        pushButtonArchitectProcess->setText(QCoreApplication::translate("ClientWidget", "Architecture processeur", nullptr));
        pushButtonOsOrdi->setText(QCoreApplication::translate("ClientWidget", "OS de l'ordinateur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
