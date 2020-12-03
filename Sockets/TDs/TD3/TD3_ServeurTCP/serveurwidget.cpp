#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);
    socEcouteServ = new QTcpServer();
    socDialClient = new QTcpSocket();
    process = new QProcess;
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
    ui->textEditClients->append("Nouvelle connexion");
    socDialClient = socEcouteServ->nextPendingConnection();
    connect(socDialClient,&QTcpSocket::readyRead,this,&ServeurWidget::onQTcpSocket_readyRead);
    connect(socDialClient, &QTcpSocket::disconnected, this, &ServeurWidget::onQTcpSocket_disconnected);
}

void ServeurWidget::onQTcpSocket_readyRead()
{
    QChar commande;
    QString reponse;
    QString message;
    if(socDialClient->bytesAvailable() > 0)
    {
        QByteArray demande = socDialClient->readAll();
        commande = demande.at(0);
        switch (commande.toLatin1())
        {
        case 'u':
            reponse = getenv("USER");
            socDialClient->write(reponse.toLatin1());
            message = "Réponse envoyée à " + socDialClient->peerAddress().toString()+" : " + reponse;
            ui->textEditClients->append(message);
            break;
        case 'c':
            reponse = QHostInfo::localHostName();
            socDialClient->write(reponse.toLatin1());
            message = "Réponse envoyée à " + socDialClient->peerAddress().toString()+" : " + reponse;
            ui->textEditClients->append(message);
            break;
        case'o':
            reponse = QSysInfo::kernelType();
            process->start("uname",QStringList("-p"));
            socDialClient->write(reponse.toLatin1(), reponse.length());
            break;
        case 'a':
            reponse = QSysInfo::currentCpuArchitecture();
            process->start("uname");
            socDialClient->write(reponse.toLatin1(),reponse.length());
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
    socDialClient = nullptr;
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
