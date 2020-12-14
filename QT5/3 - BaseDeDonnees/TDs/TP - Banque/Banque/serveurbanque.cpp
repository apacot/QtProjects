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
        qDebug() << "Un client est connecté";
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
    quint16 taille = 0;
    QChar commande;
    QString reponse;
    float montant;
    int numCompte;
    CompteClient *client = (CompteClient *)sender();

    if(!client)
    {
        QMessageBox message;
        message.setText("Erreur de lecture : "+client->errorString());
        message.exec();
    }
    else
    {
        if(client->bytesAvailable() > 0)
        {
            QDataStream in(client);
            in>>taille;
            in>>commande;
            switch(commande.toLatin1())
            {
            case 'N' :
                in >> numCompte;
                break;
            case 'R':
                in >> montant;
                break;
            case 'D':
                in >> montant;
                break;
            }
        }
        //envoyer un message en fonction de la demande du client
        switch (commande.toLatin1())
        {
        case 'N':
            client->DefinirNumCompte(numCompte);
            envoyerMessage("Bienvenue sur le compte " + QString::number(numCompte),client);
            qDebug() << "Message de bienvenue envoyé";
            break;
        case 'R':
            if(montant > 0)
            client->Retirer(montant);
            envoyerMessage("nouveau solde " + QString::number(client->ObtenirSolde()),client);
            qDebug()<< "Solde après retrait envoyé";
            break;
        case 'D':
            client->Deposer(montant);
            envoyerMessage("nouveau solde "+QString::number(client->ObtenirSolde()),client);
            qDebug()<< "solde après dépot envoyé";
            break;
        case 'S':
            envoyerMessage("Solde "+QString::number(client->ObtenirSolde()),client);
            qDebug() << "Solde envoyé";
            break;

        }
    }
}
