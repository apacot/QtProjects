#include "clientwidget.h"
#include "ui_clientwidget.h"

ClientWidget::ClientWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ClientWidget)
{
    ui->setupUi(this);
    socDialServeur = new QTcpSocket;
    connect(socDialServeur,&QTcpSocket::connected,this,&ClientWidget::onQTcpSocket_connected);
    connect(socDialServeur,&QTcpSocket::disconnected,this,&ClientWidget::onQTcpSocket_disconnected);
    connect(socDialServeur,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error), this, &ClientWidget::onQTcpSocket_error);
    connect(socDialServeur,&QTcpSocket::hostFound,this,&ClientWidget::onQTcpSocket_hostFound);
    connect(socDialServeur,&QTcpSocket::stateChanged,this,&ClientWidget::onQTcpSocket_stateChanged);
    connect(socDialServeur,&QTcpSocket::aboutToClose,this,&ClientWidget::onQTcpSocket_aboutToClose);
    connect(socDialServeur,&QTcpSocket::bytesWritten,this,&ClientWidget::onQTcpSocket_bytesWritten);
    connect(socDialServeur,&QTcpSocket::readChannelFinished,this,&ClientWidget::onQTcpSocket_readChannelFinished);
    connect(socDialServeur,&QTcpSocket::readyRead,this,&ClientWidget::onQTcpSocket_readyRead);
}

ClientWidget::~ClientWidget()
{
    delete ui;
    delete socDialServeur;
}


void ClientWidget::on_pushButtonConnexion_clicked()
{
    if(ui->pushButtonConnexion->text() == "Connexion")
    {
        QHostAddress adresse(ui->lineEditIpServeur->text());
        socDialServeur->connectToHost(adresse,ui->lineEditPortServeur->text().toUInt());
        ui->pushButtonConnexion->setText("Déconnexion");
    }
    else
    {
        socDialServeur->disconnectFromHost();
        ui->pushButtonConnexion->setText("Connexion");
    }
}

void ClientWidget::on_pushButtonArchitectProcess_clicked()
{
    typeDeDemande = 'a';
    socDialServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonNomOrdiDistant_clicked()
{
    typeDeDemande = 'c';
    socDialServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonNomUtilisateur_clicked()
{
    typeDeDemande = 'u';
    socDialServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonOsOrdi_clicked()
{
    typeDeDemande="o";
    socDialServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::onQTcpSocket_connected()
{
    ui->textEditEtatConnexion->append("Connecté");
}

void ClientWidget::onQTcpSocket_disconnected()
{
    ui->textEditEtatConnexion->append("Déconnecté");
}

void ClientWidget::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
    ui->textEditEtatConnexion->append(socDialServeur->errorString());
}

void ClientWidget::onQTcpSocket_hostFound()
{
    ui->textEditEtatConnexion->append("Un hôte à été trouvé");
}

void ClientWidget::onQTcpSocket_stateChanged(QAbstractSocket::SocketState socketState)
{
    QString message;
    switch(socketState)
    {
    case QAbstractSocket::UnconnectedState:
        message = "Non connecté";
        break;
    case QAbstractSocket::HostLookupState:
        message = "Recherche d'un hôte";
        break;
    case QAbstractSocket::ConnectingState:
        message = "Connexion en cours";
        break;
    case QAbstractSocket::ConnectedState:
        message = "Connexion établie";
        break;
    case QAbstractSocket::BoundState:
        message = "La socket est liée a l'adresse ip et le port";
        break;
    case QAbstractSocket::ClosingState:
        message = "Fermeture de la connexion";
        break;
    case QAbstractSocket::ListeningState:
        message = "Usage interne uniquement";
        break;
    }
    ui->textEditEtatConnexion->append(message);
}

void ClientWidget::onQTcpSocket_aboutToClose()
{
    ui->textEditEtatConnexion->append("L'appareil va s'éteindre");
}

void ClientWidget::onQTcpSocket_bytesWritten(qint64 bytes)
{
    ui->textEditEtatConnexion->append("Des données sont en train d'être écrite sur le canal d'écriture");
}

void ClientWidget::onQTcpSocket_readChannelFinished()
{
    ui->textEditEtatConnexion->append("La lecture est finie");
}

void ClientWidget::onQTcpSocket_readyRead()
{
    QByteArray buffer = socDialServeur->readAll();

    switch (typeDeDemande.at(0).toLatin1()) {
    case 'u':
        ui->lineEditNomUser->setText(buffer.data());
        break;
    case 'c':
        ui->lineEditNomOrdiDist->setText(buffer.data());
        break;
    case 'o':
        ui->lineEditOsOrdi->setText(buffer.data());
        break;
    case 'a':
        ui->lineEditArchitectProco->setText(buffer.data());
        break;
    }
}
