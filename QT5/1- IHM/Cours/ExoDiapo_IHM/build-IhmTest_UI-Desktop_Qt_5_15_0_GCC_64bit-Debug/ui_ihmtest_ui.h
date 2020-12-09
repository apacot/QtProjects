/********************************************************************************
** Form generated from reading UI file 'ihmtest_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IHMTEST_UI_H
#define UI_IHMTEST_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IhmTest_UI
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *IhmTest_UI)
    {
        if (IhmTest_UI->objectName().isEmpty())
            IhmTest_UI->setObjectName(QString::fromUtf8("IhmTest_UI"));
        IhmTest_UI->resize(545, 345);
        centralwidget = new QWidget(IhmTest_UI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout_2->addWidget(radioButton_4);

        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout_2->addWidget(radioButton_3);


        horizontalLayout_2->addWidget(groupBox_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 371, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        IhmTest_UI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(IhmTest_UI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 545, 21));
        IhmTest_UI->setMenuBar(menubar);
        statusbar = new QStatusBar(IhmTest_UI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        IhmTest_UI->setStatusBar(statusbar);

        retranslateUi(IhmTest_UI);
        QObject::connect(pushButton, SIGNAL(clicked()), IhmTest_UI, SLOT(close()));

        QMetaObject::connectSlotsByName(IhmTest_UI);
    } // setupUi

    void retranslateUi(QMainWindow *IhmTest_UI)
    {
        IhmTest_UI->setWindowTitle(QCoreApplication::translate("IhmTest_UI", "IhmTest_UI", nullptr));
        label->setText(QCoreApplication::translate("IhmTest_UI", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("IhmTest_UI", "GroupBox", nullptr));
        radioButton->setText(QCoreApplication::translate("IhmTest_UI", "RadioButton", nullptr));
        radioButton_2->setText(QCoreApplication::translate("IhmTest_UI", "RadioButton", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("IhmTest_UI", "GroupBox", nullptr));
        radioButton_4->setText(QCoreApplication::translate("IhmTest_UI", "RadioButton", nullptr));
        radioButton_3->setText(QCoreApplication::translate("IhmTest_UI", "RadioButton", nullptr));
        pushButton->setText(QCoreApplication::translate("IhmTest_UI", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("IhmTest_UI", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IhmTest_UI: public Ui_IhmTest_UI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IHMTEST_UI_H
