/********************************************************************************
** Form generated from reading UI file 'ihmtest.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IHMTEST_H
#define UI_IHMTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IhmTest
{
public:
    QWidget *centralwidget;
    QDial *dial;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *IhmTest)
    {
        if (IhmTest->objectName().isEmpty())
            IhmTest->setObjectName(QString::fromUtf8("IhmTest"));
        IhmTest->resize(800, 600);
        centralwidget = new QWidget(IhmTest);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        dial = new QDial(centralwidget);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(160, 70, 50, 64));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(410, 160, 118, 23));
        progressBar->setValue(24);
        IhmTest->setCentralWidget(centralwidget);
        menubar = new QMenuBar(IhmTest);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        IhmTest->setMenuBar(menubar);
        statusbar = new QStatusBar(IhmTest);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        IhmTest->setStatusBar(statusbar);

        retranslateUi(IhmTest);
        QObject::connect(dial, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(IhmTest);
    } // setupUi

    void retranslateUi(QMainWindow *IhmTest)
    {
        IhmTest->setWindowTitle(QCoreApplication::translate("IhmTest", "IhmTest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IhmTest: public Ui_IhmTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IHMTEST_H
