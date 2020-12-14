#include "interfaceaccesbddbanque.h"

InterfaceAccesBDDBanque::InterfaceAccesBDDBanque(QString hote, QString bd, QString login, QString mdp)
{
    bdd=QSqlDatabase::addDatabase("QMYSQL");
    bdd.setHostName(hote);
    bdd.setDatabaseName(bd),
            bdd.setUserName(login);
    bdd.setPassword(mdp);
}

float InterfaceAccesBDDBanque::ObtenirSolde(int numCompte)
{
    float solde;
    QSqlQuery requete("select solde from comptes where idCompte = :nc;");
    requete.bindValue(":nc",numCompte);

    if(!requete.exec())
    {
        QMessageBox msg;
        msg.setText("Le compte n'existe pas !");
        msg.exec();
    }
    else
    {
        solde = requete.value("solde").toFloat();
    }
    return solde;
}

void InterfaceAccesBDDBanque::MajSolde(int numCompte, float nouveauSolde)
{

}

void InterfaceAccesBDDBanque::CreerCompte(int numCompte)
{
    if(CompteExiste(numCompte))
    {
        QMessageBox msg;
        msg.setText("Compte déjà existant !");
        msg.exec();
    }
    else
    {
        QSqlQuery requete;
        requete.prepare("insert into comptes values (':nc','200','test','truc');");
        requete.bindValue(":nc",numCompte);
        if(!requete.exec())
        {
            QMessageBox msg;
            msg.setText("pb requete" + requete.lastError().text());
            msg.exec();
        }
        else
        {
            QMessageBox msg;
            msg.setText("Compte créé avec succès");
            msg.exec();
        }

    }
}

bool InterfaceAccesBDDBanque::CompteExiste(int numCompte)
{

}
