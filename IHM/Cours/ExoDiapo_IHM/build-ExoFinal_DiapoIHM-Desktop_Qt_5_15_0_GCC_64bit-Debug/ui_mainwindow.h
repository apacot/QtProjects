/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *MenuC;
    QAction *MenuJava;
    QAction *MenuCPP;
    QAction *MenuPHP;
    QAction *MenuJS;
    QWidget *centralwidget;
    QPushButton *QuitterButton;
    QTextEdit *textEdit;
    QLabel *label_event;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_code;
    QLineEdit *texte_Code;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Choix;
    QSpacerItem *horizontalSpacer;
    QComboBox *liste_Choix;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *WindowsCheckBox;
    QCheckBox *OSXCheckBox;
    QCheckBox *LinuxCheckBox;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *WindowsRadioButton;
    QRadioButton *OSXRadioButton;
    QRadioButton *LinuxRadioButton;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *LinuxButton;
    QPushButton *WindowsButton;
    QPushButton *OSXButton;
    QMenuBar *menubar;
    QMenu *menuLangages;
    QMenu *menuWEB;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(377, 418);
        MenuC = new QAction(MainWindow);
        MenuC->setObjectName(QString::fromUtf8("MenuC"));
        MenuJava = new QAction(MainWindow);
        MenuJava->setObjectName(QString::fromUtf8("MenuJava"));
        MenuCPP = new QAction(MainWindow);
        MenuCPP->setObjectName(QString::fromUtf8("MenuCPP"));
        MenuPHP = new QAction(MainWindow);
        MenuPHP->setObjectName(QString::fromUtf8("MenuPHP"));
        MenuJS = new QAction(MainWindow);
        MenuJS->setObjectName(QString::fromUtf8("MenuJS"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QuitterButton = new QPushButton(centralwidget);
        QuitterButton->setObjectName(QString::fromUtf8("QuitterButton"));
        QuitterButton->setGeometry(QRect(230, 210, 81, 24));
        QuitterButton->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 41, 41);"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(60, 240, 261, 111));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));"));
        label_event = new QLabel(centralwidget);
        label_event->setObjectName(QString::fromUtf8("label_event"));
        label_event->setGeometry(QRect(60, 220, 71, 16));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 30, 271, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_code = new QLabel(layoutWidget);
        label_code->setObjectName(QString::fromUtf8("label_code"));

        horizontalLayout->addWidget(label_code);

        texte_Code = new QLineEdit(layoutWidget);
        texte_Code->setObjectName(QString::fromUtf8("texte_Code"));
        texte_Code->setStyleSheet(QString::fromUtf8("background-color: rgb(19, 249, 227);"));

        horizontalLayout->addWidget(texte_Code);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 70, 174, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_Choix = new QLabel(layoutWidget1);
        label_Choix->setObjectName(QString::fromUtf8("label_Choix"));

        horizontalLayout_2->addWidget(label_Choix);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        liste_Choix = new QComboBox(layoutWidget1);
        liste_Choix->addItem(QString());
        liste_Choix->addItem(QString());
        liste_Choix->addItem(QString());
        liste_Choix->setObjectName(QString::fromUtf8("liste_Choix"));

        horizontalLayout_2->addWidget(liste_Choix);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(60, 110, 256, 88));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        WindowsCheckBox = new QCheckBox(layoutWidget2);
        WindowsCheckBox->setObjectName(QString::fromUtf8("WindowsCheckBox"));

        horizontalLayout_3->addWidget(WindowsCheckBox);

        OSXCheckBox = new QCheckBox(layoutWidget2);
        OSXCheckBox->setObjectName(QString::fromUtf8("OSXCheckBox"));

        horizontalLayout_3->addWidget(OSXCheckBox);

        LinuxCheckBox = new QCheckBox(layoutWidget2);
        LinuxCheckBox->setObjectName(QString::fromUtf8("LinuxCheckBox"));

        horizontalLayout_3->addWidget(LinuxCheckBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        WindowsRadioButton = new QRadioButton(layoutWidget2);
        WindowsRadioButton->setObjectName(QString::fromUtf8("WindowsRadioButton"));

        horizontalLayout_4->addWidget(WindowsRadioButton);

        OSXRadioButton = new QRadioButton(layoutWidget2);
        OSXRadioButton->setObjectName(QString::fromUtf8("OSXRadioButton"));

        horizontalLayout_4->addWidget(OSXRadioButton);

        LinuxRadioButton = new QRadioButton(layoutWidget2);
        LinuxRadioButton->setObjectName(QString::fromUtf8("LinuxRadioButton"));

        horizontalLayout_4->addWidget(LinuxRadioButton);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        LinuxButton = new QPushButton(layoutWidget2);
        LinuxButton->setObjectName(QString::fromUtf8("LinuxButton"));

        horizontalLayout_5->addWidget(LinuxButton);

        WindowsButton = new QPushButton(layoutWidget2);
        WindowsButton->setObjectName(QString::fromUtf8("WindowsButton"));

        horizontalLayout_5->addWidget(WindowsButton);

        OSXButton = new QPushButton(layoutWidget2);
        OSXButton->setObjectName(QString::fromUtf8("OSXButton"));

        horizontalLayout_5->addWidget(OSXButton);


        verticalLayout->addLayout(horizontalLayout_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 377, 21));
        menuLangages = new QMenu(menubar);
        menuLangages->setObjectName(QString::fromUtf8("menuLangages"));
        menuWEB = new QMenu(menuLangages);
        menuWEB->setObjectName(QString::fromUtf8("menuWEB"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuLangages->menuAction());
        menuLangages->addAction(MenuC);
        menuLangages->addSeparator();
        menuLangages->addAction(MenuJava);
        menuLangages->addAction(MenuCPP);
        menuLangages->addSeparator();
        menuLangages->addAction(menuWEB->menuAction());
        menuWEB->addAction(MenuPHP);
        menuWEB->addAction(MenuJS);

        retranslateUi(MainWindow);
        QObject::connect(QuitterButton, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(texte_Code, SIGNAL(textEdited(QString)), textEdit, SLOT(append(QString)));
        QObject::connect(liste_Choix, SIGNAL(currentIndexChanged(QString)), textEdit, SLOT(append(QString)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MenuC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        MenuJava->setText(QCoreApplication::translate("MainWindow", "Java", nullptr));
        MenuCPP->setText(QCoreApplication::translate("MainWindow", "C++", nullptr));
        MenuPHP->setText(QCoreApplication::translate("MainWindow", "PHP", nullptr));
        MenuJS->setText(QCoreApplication::translate("MainWindow", "Javascript", nullptr));
        QuitterButton->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
        label_event->setText(QCoreApplication::translate("MainWindow", "\303\251v\303\250nement", nullptr));
        label_code->setText(QCoreApplication::translate("MainWindow", "Entrez votre code", nullptr));
        label_Choix->setText(QCoreApplication::translate("MainWindow", "Choix", nullptr));
        liste_Choix->setItemText(0, QCoreApplication::translate("MainWindow", "Linux", nullptr));
        liste_Choix->setItemText(1, QCoreApplication::translate("MainWindow", "Windows", nullptr));
        liste_Choix->setItemText(2, QCoreApplication::translate("MainWindow", "OS X Lion", nullptr));

        WindowsCheckBox->setText(QCoreApplication::translate("MainWindow", "Windows", nullptr));
        OSXCheckBox->setText(QCoreApplication::translate("MainWindow", "OS X Lion", nullptr));
        LinuxCheckBox->setText(QCoreApplication::translate("MainWindow", "Linux", nullptr));
        WindowsRadioButton->setText(QCoreApplication::translate("MainWindow", "Windows", nullptr));
        OSXRadioButton->setText(QCoreApplication::translate("MainWindow", "OS X Lion", nullptr));
        LinuxRadioButton->setText(QCoreApplication::translate("MainWindow", "Linux", nullptr));
        LinuxButton->setText(QCoreApplication::translate("MainWindow", "Linux", nullptr));
        WindowsButton->setText(QCoreApplication::translate("MainWindow", "Windows", nullptr));
        OSXButton->setText(QCoreApplication::translate("MainWindow", "OS X Lion", nullptr));
        menuLangages->setTitle(QCoreApplication::translate("MainWindow", "Langages", nullptr));
        menuWEB->setTitle(QCoreApplication::translate("MainWindow", "WEB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
