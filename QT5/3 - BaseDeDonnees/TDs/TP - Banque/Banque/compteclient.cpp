#include "compteclient.h"


CompteClient::CompteClient(QObject *parent):QTcpSocket(parent)
{

}

CompteClient::~CompteClient()
{

}

bool CompteClient::Retirer(float montant)
{
    bool retour;
    if(montant <= bdd.ObtenirSolde(numCompte))
    {
        montant = montant*-1; //c'est un retrait, le montant est donc soustrait, c'est une valeur négative
        bdd.MajSolde(numCompte,montant);
        retour = true;
    }
    else
    {
        retour = false;
    }
    return retour;
}

void CompteClient::Deposer(float montant)
{
    bdd.MajSolde(numCompte,montant);
}

float CompteClient::ObtenirSolde()
{
    return solde;
}

void CompteClient::DefinirNumCompte(int nc)
{
    bdd.CreerCompte(nc);
    bdd.ObtenirSolde(nc);
}

int CompteClient::ObtenirNumCompte()
{
    int RetourNumCompte;
    RetourNumCompte = numCompte;
    return RetourNumCompte;
}
