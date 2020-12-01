#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);
    socEcouteServ = new QTcpServer;
    socDialClient = new QTcpSocket;
    process = new QProcess;
    connect(socEcouteServ,&QTcpServer::newConnection,this,&ServeurWidget::onQTcpServer_newConnection);
    connect(process, &QProcess::readyReadStandardOutput,this,&ServeurWidget::onQProcess_readyReadStandardOutput);
}

ServeurWidget::~ServeurWidget()
{
    delete ui;
    delete socEcouteServ;
    delete socDialClient;
    delete process;
}

void ServeurWidget::onQTcpServer_newConnection()
{
    socDialClient = socEcouteServ->nextPendingConnection();
    connect(socDialClient,&QTcpSocket::readyRead,this,&ServeurWidget::onQTcpSocket_readyRead);
    connect(socDialClient, &QTcpSocket::disconnected, this, &ServeurWidget::onQTcpSocket_disconnected);
    ui->textEditClients->append("Le client est connecté");
}

void ServeurWidget::onQTcpSocket_readyRead()
{
    QChar commande;

    if(socDialClient->bytesAvailable())
    {
        QByteArray demande = socDialClient->readAll();
        commande = demande.at(0);
        QString reponse;
        switch (commande.toLatin1())
        {
        case 'u':
            reponse = getenv("USER");
            socDialClient->write(reponse.toLatin1());
            break;
        case 'c':
            reponse = QHostInfo::localHostName();
            socDialClient->write(reponse.toLatin1());
            break;
        case'o':
            process->start("uname",QStringList("-p"));
            break;
        case 'a':
            process->start("uname");
            break;
        default:
            reponse = "erreur";
            break;
        }
    }
}

void ServeurWidget::onQTcpSocket_disconnected()
{
    ui->textEditClients->append("Le client est déconnecté");
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
    if(socEcouteServ->listen(QHostAddress::Any,ui->spinBoxPort->value()))
    {
        connect(socEcouteServ,&QTcpServer::newConnection,this,&ServeurWidget::onQTcpServer_newConnection);
        qDebug() << "Le serveur est lancé";
    }
}
