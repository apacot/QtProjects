#include "dab_mainwindow.h"
#include "ui_dab_mainwindow.h"

DAB_MainWindow::DAB_MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DAB_MainWindow)
{
    ui->setupUi(this);
    socClientBanque = new QTcpSocket();
    connect(socClientBanque,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error),
            this,&DAB_MainWindow::onQTcpSocket_error);
    connect(socClientBanque,&QTcpSocket::connected,this,&DAB_MainWindow::onQTcpSocket_connected);
    connect(socClientBanque,&QTcpSocket::disconnected,this,&DAB_MainWindow::onQTcpSocket_disconnected);

    connect(socClientBanque,&QTcpSocket::stateChanged,this,&DAB_MainWindow::onQTcpSocket_stateChanged);



    connect(socClientBanque,&QTcpSocket::readyRead,this,&DAB_MainWindow::onQTcpSocket_readyRead);
}

DAB_MainWindow::~DAB_MainWindow()
{
    delete ui;
    delete socClientBanque;
}


void DAB_MainWindow::on_PushButtonConnexion_clicked()
{
    if(ui->PushButtonConnexion->text() == "Connexion")
    {
        QHostAddress adresse(ui->lineEditIP->text());
        socClientBanque->connectToHost(adresse,ui->lineEditPort->text().toUInt());
    }
    else
    {

    }
}

void DAB_MainWindow::onQTcpSocket_connected()
{
    ui->pushButtonEnvoi->setEnabled(true);
    ui->pushButtonNumCompte->setEnabled(true);
    ui->lineEditMessageBanque->setEnabled(true);
    ui->PushButtonConnexion->setText("Déconnexion");
}

void DAB_MainWindow::onQTcpSocket_disconnected()
{
    ui->pushButtonEnvoi->setEnabled(false);
    ui->pushButtonNumCompte->setEnabled(false);
    ui->lineEditMessageBanque->setEnabled(false);
    ui->PushButtonConnexion->setText("Connexion");
}

void DAB_MainWindow::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{

}

void DAB_MainWindow::onQTcpSocket_hostFound()
{

}

void DAB_MainWindow::onQTcpSocket_stateChanged(QAbstractSocket::SocketState socketState)
{

}

void DAB_MainWindow::onQTcpSocket_aboutToClose()
{

}

void DAB_MainWindow::onQTcpSocket_bytesWritten(qint64 bytes)
{

}

void DAB_MainWindow::onQTcpSocket_readChannelFinished()
{

}

void DAB_MainWindow::onQTcpSocket_readyRead()
{

}

void DAB_MainWindow::on_pushButtonEnvoi_clicked()
{

}

void DAB_MainWindow::on_pushButtonNumCompte_clicked()
{

}
