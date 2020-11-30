#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);
    socEcouteServ = new QTcpServer;
}

ServeurWidget::~ServeurWidget()
{
    delete ui;
    delete socEcouteServ;
}

void ServeurWidget::onQTcpServer_newConnection()
{

}

void ServeurWidget::onQTcpSocket_readyRead()
{
    QString reponse;
    QByteArray demandeClient = socDialClient->readAll();
    QChar commande = demandeClient.at(0);
    switch (commande.toLatin1())
    {
    case 'u':
        reponse = getenv("USERNAME");
        break;
    case 'c':
        reponse = QHostInfo::localHostName();
        break;
    }
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
    socEcouteServ->listen(QHostAddress::Any,ui->spinBoxPort->value());

}
