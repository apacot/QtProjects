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
    if(montant <= solde)
    {
        solde -= montant;
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
    solde += montant;
}

float CompteClient::ObtenirSolde()
{
    return solde;
}

void CompteClient::DefinirNumCompte(int nc)
{
    numCompte = nc;
    solde = 200;
}

int CompteClient::ObtenirNumCompte()
{
    int RetourNumCompte;
    RetourNumCompte = numCompte;
    return RetourNumCompte;
}
