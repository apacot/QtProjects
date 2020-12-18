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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientWidget
{
public:
    QLabel *labelAdresseServeur;
    QLineEdit *lineEditAdresseServeur;
    QSpinBox *spinBoxPortServeur;
    QPushButton *pushButtonConnexion;
    QPushButton *pushButtonQuitter;
    QPushButton *pushButtonUp;
    QPushButton *pushButtonRight;
    QPushButton *pushButtonLeft;
    QPushButton *pushButtonDown;
    QLabel *labelInformations;
    QLabel *labelDistance;
    QLabel *labelNumeroPort;
    QLCDNumber *lcdNumberDistance;

    void setupUi(QWidget *clientWidget)
    {
        if (clientWidget->objectName().isEmpty())
            clientWidget->setObjectName(QString::fromUtf8("clientWidget"));
        clientWidget->resize(773, 501);
        labelAdresseServeur = new QLabel(clientWidget);
        labelAdresseServeur->setObjectName(QString::fromUtf8("labelAdresseServeur"));
        labelAdresseServeur->setGeometry(QRect(60, 190, 121, 16));
        lineEditAdresseServeur = new QLineEdit(clientWidget);
        lineEditAdresseServeur->setObjectName(QString::fromUtf8("lineEditAdresseServeur"));
        lineEditAdresseServeur->setGeometry(QRect(60, 220, 113, 24));
        spinBoxPortServeur = new QSpinBox(clientWidget);
        spinBoxPortServeur->setObjectName(QString::fromUtf8("spinBoxPortServeur"));
        spinBoxPortServeur->setGeometry(QRect(260, 230, 81, 25));
        spinBoxPortServeur->setMaximum(9999);
        pushButtonConnexion = new QPushButton(clientWidget);
        pushButtonConnexion->setObjectName(QString::fromUtf8("pushButtonConnexion"));
        pushButtonConnexion->setGeometry(QRect(200, 310, 80, 24));
        pushButtonQuitter = new QPushButton(clientWidget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(300, 310, 80, 24));
        pushButtonUp = new QPushButton(clientWidget);
        pushButtonUp->setObjectName(QString::fromUtf8("pushButtonUp"));
        pushButtonUp->setGeometry(QRect(570, 220, 80, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/images/arrow_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonUp->setIcon(icon);
        pushButtonRight = new QPushButton(clientWidget);
        pushButtonRight->setObjectName(QString::fromUtf8("pushButtonRight"));
        pushButtonRight->setGeometry(QRect(680, 240, 80, 24));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/images/arrow_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRight->setIcon(icon1);
        pushButtonLeft = new QPushButton(clientWidget);
        pushButtonLeft->setObjectName(QString::fromUtf8("pushButtonLeft"));
        pushButtonLeft->setGeometry(QRect(530, 250, 80, 24));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/images/arrow_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonLeft->setIcon(icon2);
        pushButtonDown = new QPushButton(clientWidget);
        pushButtonDown->setObjectName(QString::fromUtf8("pushButtonDown"));
        pushButtonDown->setGeometry(QRect(620, 290, 80, 24));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/images/arrow_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonDown->setIcon(icon3);
        labelInformations = new QLabel(clientWidget);
        labelInformations->setObjectName(QString::fromUtf8("labelInformations"));
        labelInformations->setGeometry(QRect(580, 390, 81, 16));
        labelDistance = new QLabel(clientWidget);
        labelDistance->setObjectName(QString::fromUtf8("labelDistance"));
        labelDistance->setGeometry(QRect(210, 440, 58, 16));
        labelNumeroPort = new QLabel(clientWidget);
        labelNumeroPort->setObjectName(QString::fromUtf8("labelNumeroPort"));
        labelNumeroPort->setGeometry(QRect(240, 210, 101, 16));
        lcdNumberDistance = new QLCDNumber(clientWidget);
        lcdNumberDistance->setObjectName(QString::fromUtf8("lcdNumberDistance"));
        lcdNumberDistance->setGeometry(QRect(300, 440, 64, 23));

        retranslateUi(clientWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), clientWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(clientWidget);
    } // setupUi

    void retranslateUi(QWidget *clientWidget)
    {
        clientWidget->setWindowTitle(QCoreApplication::translate("clientWidget", "clientWidget", nullptr));
        labelAdresseServeur->setText(QCoreApplication::translate("clientWidget", "Adresse du serveur", nullptr));
        pushButtonConnexion->setText(QCoreApplication::translate("clientWidget", "Connexion", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("clientWidget", "Quitter", nullptr));
        pushButtonUp->setText(QString());
        pushButtonRight->setText(QString());
        pushButtonLeft->setText(QString());
        pushButtonDown->setText(QString());
        labelInformations->setText(QCoreApplication::translate("clientWidget", "Informations", nullptr));
        labelDistance->setText(QCoreApplication::translate("clientWidget", "Distance", nullptr));
        labelNumeroPort->setText(QCoreApplication::translate("clientWidget", "Numero de port", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientWidget: public Ui_clientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
