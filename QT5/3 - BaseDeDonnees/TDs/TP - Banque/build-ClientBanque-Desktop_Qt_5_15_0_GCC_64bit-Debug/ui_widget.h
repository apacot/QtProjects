/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBoxConnexion;
    QPushButton *pushButtonConnexionBDD;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelAdresseIP;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditAdresseIP;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelNomBDD;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEditNomBdd;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelLogin;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEditLogin;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelMDP;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEditMDP;
    QGroupBox *groupBoxInfos;
    QPushButton *pushButtonAfficheInfos;
    QTableWidget *tableWidgetInfos;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(599, 488);
        groupBoxConnexion = new QGroupBox(Widget);
        groupBoxConnexion->setObjectName(QString::fromUtf8("groupBoxConnexion"));
        groupBoxConnexion->setGeometry(QRect(10, 10, 531, 231));
        pushButtonConnexionBDD = new QPushButton(groupBoxConnexion);
        pushButtonConnexionBDD->setObjectName(QString::fromUtf8("pushButtonConnexionBDD"));
        pushButtonConnexionBDD->setGeometry(QRect(319, 80, 201, 24));
        layoutWidget = new QWidget(groupBoxConnexion);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 267, 124));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelAdresseIP = new QLabel(layoutWidget);
        labelAdresseIP->setObjectName(QString::fromUtf8("labelAdresseIP"));

        horizontalLayout->addWidget(labelAdresseIP);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEditAdresseIP = new QLineEdit(layoutWidget);
        lineEditAdresseIP->setObjectName(QString::fromUtf8("lineEditAdresseIP"));

        horizontalLayout->addWidget(lineEditAdresseIP);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelNomBDD = new QLabel(layoutWidget);
        labelNomBDD->setObjectName(QString::fromUtf8("labelNomBDD"));

        horizontalLayout_2->addWidget(labelNomBDD);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEditNomBdd = new QLineEdit(layoutWidget);
        lineEditNomBdd->setObjectName(QString::fromUtf8("lineEditNomBdd"));

        horizontalLayout_2->addWidget(lineEditNomBdd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelLogin = new QLabel(layoutWidget);
        labelLogin->setObjectName(QString::fromUtf8("labelLogin"));

        horizontalLayout_3->addWidget(labelLogin);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        lineEditLogin = new QLineEdit(layoutWidget);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));

        horizontalLayout_3->addWidget(lineEditLogin);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelMDP = new QLabel(layoutWidget);
        labelMDP->setObjectName(QString::fromUtf8("labelMDP"));

        horizontalLayout_4->addWidget(labelMDP);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        lineEditMDP = new QLineEdit(layoutWidget);
        lineEditMDP->setObjectName(QString::fromUtf8("lineEditMDP"));

        horizontalLayout_4->addWidget(lineEditMDP);


        verticalLayout->addLayout(horizontalLayout_4);

        groupBoxInfos = new QGroupBox(Widget);
        groupBoxInfos->setObjectName(QString::fromUtf8("groupBoxInfos"));
        groupBoxInfos->setGeometry(QRect(30, 250, 511, 221));
        pushButtonAfficheInfos = new QPushButton(groupBoxInfos);
        pushButtonAfficheInfos->setObjectName(QString::fromUtf8("pushButtonAfficheInfos"));
        pushButtonAfficheInfos->setGeometry(QRect(100, 30, 301, 24));
        tableWidgetInfos = new QTableWidget(groupBoxInfos);
        if (tableWidgetInfos->columnCount() < 4)
            tableWidgetInfos->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetInfos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetInfos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetInfos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetInfos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetInfos->setObjectName(QString::fromUtf8("tableWidgetInfos"));
        tableWidgetInfos->setGeometry(QRect(10, 60, 481, 151));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBoxConnexion->setTitle(QCoreApplication::translate("Widget", "Connexion", nullptr));
        pushButtonConnexionBDD->setText(QCoreApplication::translate("Widget", "Connexion \303\240 la base de donn\303\251es", nullptr));
        labelAdresseIP->setText(QCoreApplication::translate("Widget", "Adresse IP", nullptr));
        labelNomBDD->setText(QCoreApplication::translate("Widget", "Nom de la bdd", nullptr));
        labelLogin->setText(QCoreApplication::translate("Widget", "Login", nullptr));
        labelMDP->setText(QCoreApplication::translate("Widget", "Mot de passe", nullptr));
        groupBoxInfos->setTitle(QCoreApplication::translate("Widget", "GroupBox", nullptr));
        pushButtonAfficheInfos->setText(QCoreApplication::translate("Widget", "Afficher les informations de tous les comptes", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetInfos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Widget", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetInfos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Widget", "Pr\303\251nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetInfos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Widget", "Num\303\251ro de compte", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetInfos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Widget", "Solde", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
