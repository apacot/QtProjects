#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_WindowsCheckBox_clicked(bool checked)
{
    if(checked == true)
    {
        ui->textEdit->append("Windows coche");
    }
    else
    {
        ui->textEdit->append("Windows"
                             " decoche");
    }
}

void MainWindow::on_OSXCheckBox_clicked(bool checked)
{
    if(checked == true)
    {
        ui->textEdit->append("OS X Lion coche");
    }
    else
    {
        ui->textEdit->append("OS X Lion decoche");
    }
}

void MainWindow::on_LinuxCheckBox_clicked(bool checked)
{
    if(checked == true)
    {
        ui->textEdit->append("Linux coche");
    }
    else
    {
        ui->textEdit->append("Linux decoche");
    }
}

void MainWindow::on_WindowsRadioButton_clicked(bool checked)
{
    if(checked == true)
    {
        ui->textEdit->append("radio windows");
    }
}



void MainWindow::on_OSXRadioButton_clicked(bool checked)
{
    if(checked == true)
    {
        ui->textEdit->append("radio OS X Lion");
    }
}

void MainWindow::on_LinuxRadioButton_clicked(bool checked)
{
    if(checked == true) //correspond à if(checked)
    {
        ui->textEdit->append("radio Linux");
    }
}


void MainWindow::on_LinuxButton_clicked()
{
    ui->textEdit->append("bouton Linux");
}


void MainWindow::on_WindowsButton_clicked()
{
    ui->textEdit->append("bouton windows");
}

void MainWindow::on_OSXButton_clicked()
{
    ui->textEdit->append("bouton os x Lion");
}

void MainWindow::on_MenuC_triggered()
{
    ui->textEdit->append("C");
}

void MainWindow::on_MenuJava_triggered()
{
    ui->textEdit->append("Java");
}

void MainWindow::on_MenuCPP_triggered()
{
    ui->textEdit->append("C++");
}

void MainWindow::on_MenuPHP_triggered()
{
    ui->textEdit->append("PHP");
}

void MainWindow::on_MenuJS_triggered()
{
    ui->textEdit->append("Javascript");
}
