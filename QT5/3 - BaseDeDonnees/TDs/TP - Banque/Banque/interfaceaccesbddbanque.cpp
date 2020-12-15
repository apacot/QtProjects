#include "interfaceaccesbddbanque.h"

InterfaceAccesBDDBanque::InterfaceAccesBDDBanque(QString hote, QString bd, QString login, QString mdp)
{

}

float InterfaceAccesBDDBanque::ObtenirSolde(int numCompte)
{
    float solde = 0;
    if(CompteExiste(numCompte))
    {

        QSqlQuery requete("select solde from comptes where idCompte = :nc;");
        requete.bindValue(":nc",numCompte);

        if(!requete.exec())
        {
            QMessageBox msg;
            msg.setText("pb requete" + requete.lastError().text());
            msg.exec();
        }
        else
        {
            solde = requete.value("solde").toFloat();

        }
    }
    else
    {
        QMessageBox msg;
        msg.setText("le compte n'existe pas !");
        msg.exec();
    }
    return solde;
}
void InterfaceAccesBDDBanque::MajSolde(int numCompte, float nouveauSolde)
{
    if(CompteExiste(numCompte))
    {
        QSqlQuery requete("update comptes set solde = ':ns' where idCompte = :nc;");
        requete.bindValue(":nc",numCompte);
        requete.bindValue(":ns",nouveauSolde);
        if(!requete.exec())
        {
            QMessageBox msg;
            msg.setText("pb requete" + requete.lastError().text());
            msg.exec();
        }
        else
        {
           requete.value("solde").toFloat();
        }
    }
    else
    {
        QMessageBox msg;
        msg.setText("le compte n'existe pas !");
        msg.exec();
    }
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
        QSqlQuery requete;
        bool existe=false;
        requete.prepare("select solde from comptes where idCompte=:id;");
        requete.bindValue(":id",numCompte);
        requete.exec();
        if (!requete.exec()){
            qDebug()<<"pb requete compte existe "<<requete.lastError();
        }
        // si le compte existe on passe existe a vrai
        if (requete.size()!=0)
        {
            existe=true;
        }
        return existe;
}
