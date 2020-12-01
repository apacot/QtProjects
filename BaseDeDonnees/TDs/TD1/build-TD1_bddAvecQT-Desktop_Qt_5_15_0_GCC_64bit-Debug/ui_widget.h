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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *LabelNumDept;
    QLineEdit *lineEditNumDept;
    QPushButton *pushButtonNomDept;
    QLabel *labelNomDept;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxRegions;
    QComboBox *comboBoxDepartements;
    QComboBox *comboBoxVilles;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 70, 533, 50));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LabelNumDept = new QLabel(widget);
        LabelNumDept->setObjectName(QString::fromUtf8("LabelNumDept"));

        horizontalLayout->addWidget(LabelNumDept);

        lineEditNumDept = new QLineEdit(widget);
        lineEditNumDept->setObjectName(QString::fromUtf8("lineEditNumDept"));

        horizontalLayout->addWidget(lineEditNumDept);

        pushButtonNomDept = new QPushButton(widget);
        pushButtonNomDept->setObjectName(QString::fromUtf8("pushButtonNomDept"));

        horizontalLayout->addWidget(pushButtonNomDept);


        verticalLayout->addLayout(horizontalLayout);

        labelNomDept = new QLabel(widget);
        labelNomDept->setObjectName(QString::fromUtf8("labelNomDept"));

        verticalLayout->addWidget(labelNomDept);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(70, 160, 498, 26));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBoxRegions = new QComboBox(widget1);
        comboBoxRegions->addItem(QString());
        comboBoxRegions->setObjectName(QString::fromUtf8("comboBoxRegions"));

        horizontalLayout_2->addWidget(comboBoxRegions);

        comboBoxDepartements = new QComboBox(widget1);
        comboBoxDepartements->addItem(QString());
        comboBoxDepartements->setObjectName(QString::fromUtf8("comboBoxDepartements"));

        horizontalLayout_2->addWidget(comboBoxDepartements);

        comboBoxVilles = new QComboBox(widget1);
        comboBoxVilles->addItem(QString());
        comboBoxVilles->setObjectName(QString::fromUtf8("comboBoxVilles"));

        horizontalLayout_2->addWidget(comboBoxVilles);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        LabelNumDept->setText(QCoreApplication::translate("Widget", "Donnez un num\303\251ro de d\303\251partement", nullptr));
        pushButtonNomDept->setText(QCoreApplication::translate("Widget", "Avoir le nom du d\303\251partement", nullptr));
        labelNomDept->setText(QCoreApplication::translate("Widget", "Nom du d\303\251partement", nullptr));
        comboBoxRegions->setItemText(0, QCoreApplication::translate("Widget", "Choisissez une r\303\251gion", nullptr));

        comboBoxDepartements->setItemText(0, QCoreApplication::translate("Widget", "Choisissez un d\303\251partement", nullptr));

        comboBoxVilles->setItemText(0, QCoreApplication::translate("Widget", "Choisissez une ville", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
