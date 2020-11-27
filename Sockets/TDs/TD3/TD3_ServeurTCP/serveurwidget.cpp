#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);
}

ServeurWidget::~ServeurWidget()
{
    delete ui;
}

void ServeurWidget::onQTcpServer_newConnection()
{

}

void ServeurWidget::onQTcpSocket_readyRead()
{

}

void ServeurWidget::onQTcpSocket_disconnected()
{

}

void ServeurWidget::onQProcess_readyReadStandardOutput()
{
    QString reponse = process->readAllStandardOutput();
    if(!reponse.isEmpty())
    {
    QString message = "Réponse envoyée à " + socDialClient->peerAddress().toString()+" : " + reponse;
    ui->textEditClients->append(message);
    socDialClient->write(reponse.toLatin1());
    }
}


void ServeurWidget::on_pushButtonLancerServeur_clicked()
{

}
