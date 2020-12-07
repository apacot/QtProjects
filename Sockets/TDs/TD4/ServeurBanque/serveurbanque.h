#ifndef SERVEURBANQUE_H
#define SERVEURBANQUE_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QMessageBox>
#include <QList>
#include <QBuffer>
#include "compteclient.h"

class ServeurBanque : public QTcpServer
{
public:
    ServeurBanque(QObject *parent = nullptr);
    ~ServeurBanque();
    void start();
    void stop();
    void envoyerMessage(QString msg, CompteClient *client);
private slots:
    void onServeurBanque_newConnection();
    void onCompteClient_disconnected();
    void onCompteClient_readyRead();
private:
    QList<CompteClient *> lesConnexionsClients;

};

#endif // SERVEURBANQUE_H
