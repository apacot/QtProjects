#include "serveurbanque.h"

ServeurBanque::ServeurBanque(QObject *parent):QTcpServer(parent)
{
    if(!connect(this,&QTcpServer::newConnection,this,&ServeurBanque::onServeurBanque_newConnection))
    {
        QMessageBox msg;
        msg.setText("Erreur connect newConnection");
        msg.exec();
    }
}

ServeurBanque::~ServeurBanque()
{

}

void ServeurBanque::start()
{
    if(this->listen(QHostAddress::Any,8888))
    {
        qDebug() << "Le serveur est lancé";
    }
    else
    {
        QMessageBox message;
        message.setText("Lancement serveur impossible (Erreur écoute Socket)");
        message.exec();
        this->close();
    }
}

void ServeurBanque::stop()
{
    this->close();
}

void ServeurBanque::envoyerMessage(QString msg, CompteClient *client)
{
    quint16 taille = 0;
    QBuffer tampon;
    tampon.open(QIODevice::WriteOnly);
    //association de la socket au flux de sortie
    QDataStream out(&tampon);
    //construction de la trame
    out << taille << msg;
    //calcul de la taille de la trame
    taille = tampon.size() - sizeof(taille);
    //placement sur la premiere position du flux pour pouvoir modifier la taille
    tampon.seek(0);
    //modification de la trame avec la taille reelle de la trame
    out<<taille;
    client->write(tampon.buffer());
}
void ServeurBanque::onServeurBanque_newConnection()
{
    CompteClient *client;

    while(hasPendingConnections())
    {
        client =static_cast<CompteClient *>(this->nextPendingConnection());
        connect(client,&QTcpSocket::readyRead,this,&ServeurBanque::onCompteClient_readyRead);
        connect(client,&QTcpSocket::disconnected,this,&ServeurBanque::onCompteClient_disconnected);
        lesConnexionsClients.append(client);
        envoyerMessage("Quel est votre numéro de compte ?",client);
    }
}

void ServeurBanque::onCompteClient_disconnected()
{
    CompteClient *client = (CompteClient *)sender();
    if(!client)
    {
        QMessageBox msg;
        msg.setText("erreur deconnexion : " +client->errorString());
        msg.exec();
    }
    else
    {
        lesConnexionsClients.removeOne(client);
        client->deleteLater();
    }
}

void ServeurBanque::onCompteClient_readyRead()
{

}
