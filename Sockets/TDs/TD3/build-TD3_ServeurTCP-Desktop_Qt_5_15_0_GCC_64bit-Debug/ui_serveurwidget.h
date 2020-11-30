/********************************************************************************
** Form generated from reading UI file 'serveurwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEURWIDGET_H
#define UI_SERVEURWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServeurWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *LabelNumPort;
    QSpinBox *spinBoxPort;
    QPushButton *pushButtonLancerServeur;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelClients;
    QTextEdit *textEditClients;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *ServeurWidget)
    {
        if (ServeurWidget->objectName().isEmpty())
            ServeurWidget->setObjectName(QString::fromUtf8("ServeurWidget"));
        ServeurWidget->resize(305, 293);
        layoutWidget = new QWidget(ServeurWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 271, 261));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LabelNumPort = new QLabel(layoutWidget);
        LabelNumPort->setObjectName(QString::fromUtf8("LabelNumPort"));

        horizontalLayout->addWidget(LabelNumPort);

        spinBoxPort = new QSpinBox(layoutWidget);
        spinBoxPort->setObjectName(QString::fromUtf8("spinBoxPort"));
        spinBoxPort->setMaximum(9999);
        spinBoxPort->setValue(1025);
        spinBoxPort->setDisplayIntegerBase(10);

        horizontalLayout->addWidget(spinBoxPort);


        verticalLayout->addLayout(horizontalLayout);

        pushButtonLancerServeur = new QPushButton(layoutWidget);
        pushButtonLancerServeur->setObjectName(QString::fromUtf8("pushButtonLancerServeur"));

        verticalLayout->addWidget(pushButtonLancerServeur);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelClients = new QLabel(layoutWidget);
        labelClients->setObjectName(QString::fromUtf8("labelClients"));

        verticalLayout_2->addWidget(labelClients);

        textEditClients = new QTextEdit(layoutWidget);
        textEditClients->setObjectName(QString::fromUtf8("textEditClients"));

        verticalLayout_2->addWidget(textEditClients);

        pushButtonQuitter = new QPushButton(layoutWidget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));

        verticalLayout_2->addWidget(pushButtonQuitter);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(ServeurWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ServeurWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ServeurWidget);
    } // setupUi

    void retranslateUi(QWidget *ServeurWidget)
    {
        ServeurWidget->setWindowTitle(QCoreApplication::translate("ServeurWidget", "ServeurWidget", nullptr));
        LabelNumPort->setText(QCoreApplication::translate("ServeurWidget", "Num\303\251ro de port", nullptr));
        pushButtonLancerServeur->setText(QCoreApplication::translate("ServeurWidget", "Lancement Serveur", nullptr));
        labelClients->setText(QCoreApplication::translate("ServeurWidget", "Clients", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("ServeurWidget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServeurWidget: public Ui_ServeurWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEURWIDGET_H
