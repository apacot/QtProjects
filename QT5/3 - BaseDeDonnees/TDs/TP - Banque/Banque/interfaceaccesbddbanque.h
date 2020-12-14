#ifndef INTERFACEACCESBDDBANQUE_H
#define INTERFACEACCESBDDBANQUE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QString>
#include <QMessageBox>
#include <QDebug>
#include "compteclient.h"

class InterfaceAccesBDDBanque
{
public:
    InterfaceAccesBDDBanque(QString hote = "172.18.58.14", QString bd = "banque", QString login = "snir", QString mdp = "snir");
    float ObtenirSolde(int numCompte);
    void MajSolde(int numCompte, float nouveauSolde);
    void CreerCompte(int numCompte);
    bool CompteExiste(int numCompte);
private:
    QSqlDatabase bdd;
};

#endif // INTERFACEACCESBDDBANQUE_H
