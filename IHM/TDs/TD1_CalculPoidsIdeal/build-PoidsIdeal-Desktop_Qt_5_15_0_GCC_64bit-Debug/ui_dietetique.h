/********************************************************************************
** Form generated from reading UI file 'dietetique.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIETETIQUE_H
#define UI_DIETETIQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dietetique
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *PrenomLabel;
    QLineEdit *TexteNom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *NomLabel;
    QLineEdit *TextePrenom;
    QHBoxLayout *horizontalLayout_4;
    QLabel *LabelSexe;
    QRadioButton *FemmeRadioButton;
    QRadioButton *HommeRadioButton;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *AgeLabel;
    QLabel *PoidsLabel;
    QLabel *TailleLabel;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpinBox *AgeSpinBox;
    QDoubleSpinBox *PoidsSpinBox;
    QDoubleSpinBox *TailleSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *SuiteButton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_2;
    QPushButton *QuitButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_6;

    void setupUi(QWidget *Dietetique)
    {
        if (Dietetique->objectName().isEmpty())
            Dietetique->setObjectName(QString::fromUtf8("Dietetique"));
        Dietetique->resize(466, 545);
        Dietetique->setMinimumSize(QSize(466, 545));
        Dietetique->setMaximumSize(QSize(466, 545));
        tabWidget = new QTabWidget(Dietetique);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(30, 50, 411, 411));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 80, 187, 223));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        PrenomLabel = new QLabel(widget);
        PrenomLabel->setObjectName(QString::fromUtf8("PrenomLabel"));

        horizontalLayout_2->addWidget(PrenomLabel);

        TexteNom = new QLineEdit(widget);
        TexteNom->setObjectName(QString::fromUtf8("TexteNom"));

        horizontalLayout_2->addWidget(TexteNom);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        NomLabel = new QLabel(widget);
        NomLabel->setObjectName(QString::fromUtf8("NomLabel"));

        horizontalLayout_3->addWidget(NomLabel);

        TextePrenom = new QLineEdit(widget);
        TextePrenom->setObjectName(QString::fromUtf8("TextePrenom"));

        horizontalLayout_3->addWidget(TextePrenom);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        LabelSexe = new QLabel(widget);
        LabelSexe->setObjectName(QString::fromUtf8("LabelSexe"));

        horizontalLayout_4->addWidget(LabelSexe);

        FemmeRadioButton = new QRadioButton(widget);
        FemmeRadioButton->setObjectName(QString::fromUtf8("FemmeRadioButton"));

        horizontalLayout_4->addWidget(FemmeRadioButton);

        HommeRadioButton = new QRadioButton(widget);
        HommeRadioButton->setObjectName(QString::fromUtf8("HommeRadioButton"));

        horizontalLayout_4->addWidget(HommeRadioButton);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        AgeLabel = new QLabel(widget);
        AgeLabel->setObjectName(QString::fromUtf8("AgeLabel"));

        verticalLayout_2->addWidget(AgeLabel);

        PoidsLabel = new QLabel(widget);
        PoidsLabel->setObjectName(QString::fromUtf8("PoidsLabel"));

        verticalLayout_2->addWidget(PoidsLabel);

        TailleLabel = new QLabel(widget);
        TailleLabel->setObjectName(QString::fromUtf8("TailleLabel"));

        verticalLayout_2->addWidget(TailleLabel);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        AgeSpinBox = new QSpinBox(widget);
        AgeSpinBox->setObjectName(QString::fromUtf8("AgeSpinBox"));

        verticalLayout->addWidget(AgeSpinBox);

        PoidsSpinBox = new QDoubleSpinBox(widget);
        PoidsSpinBox->setObjectName(QString::fromUtf8("PoidsSpinBox"));

        verticalLayout->addWidget(PoidsSpinBox);

        TailleSpinBox = new QDoubleSpinBox(widget);
        TailleSpinBox->setObjectName(QString::fromUtf8("TailleSpinBox"));

        verticalLayout->addWidget(TailleSpinBox);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        SuiteButton = new QPushButton(widget);
        SuiteButton->setObjectName(QString::fromUtf8("SuiteButton"));

        horizontalLayout_5->addWidget(SuiteButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_5);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        QuitButton = new QPushButton(Dietetique);
        QuitButton->setObjectName(QString::fromUtf8("QuitButton"));
        QuitButton->setGeometry(QRect(200, 470, 80, 24));
        widget1 = new QWidget(Dietetique);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_7 = new QVBoxLayout(widget1);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget2 = new QWidget(Dietetique);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_6 = new QVBoxLayout(widget2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Dietetique);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dietetique);
    } // setupUi

    void retranslateUi(QWidget *Dietetique)
    {
        Dietetique->setWindowTitle(QCoreApplication::translate("Dietetique", "Dietetique", nullptr));
        PrenomLabel->setText(QCoreApplication::translate("Dietetique", "Nom", nullptr));
        NomLabel->setText(QCoreApplication::translate("Dietetique", "Prenom", nullptr));
        LabelSexe->setText(QCoreApplication::translate("Dietetique", "Sexe", nullptr));
        FemmeRadioButton->setText(QCoreApplication::translate("Dietetique", "Femme", nullptr));
        HommeRadioButton->setText(QCoreApplication::translate("Dietetique", "Homme", nullptr));
        AgeLabel->setText(QCoreApplication::translate("Dietetique", "Age", nullptr));
        PoidsLabel->setText(QCoreApplication::translate("Dietetique", "Poids(kg)", nullptr));
        TailleLabel->setText(QCoreApplication::translate("Dietetique", "Taille(m)", nullptr));
        SuiteButton->setText(QCoreApplication::translate("Dietetique", "Suite", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Dietetique", "Informations Personnelles", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Dietetique", "Calcul du poids id\303\251al", nullptr));
        QuitButton->setText(QCoreApplication::translate("Dietetique", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dietetique: public Ui_Dietetique {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIETETIQUE_H
