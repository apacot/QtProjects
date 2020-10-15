#include "compteclient.h"


CompteClient::CompteClient(string _nom, int _numero):nom(_nom),numero(_numero)
{
    unCompteBancaire = new (CompteBancaire);
    unCompteEpargne = nullptr;
}

CompteClient::~CompteClient()
{
    delete [] unCompteBancaire;
    if(unCompteEpargne)
    {
        delete [] unCompteEpargne;
    }
}

void CompteClient::OuvrirCompteEpargne()
{
    if(!unCompteEpargne)
    {
        cout << "Quel est le montant du solde de départ ?";
        unCompteEpargne = new(CompteEpargne);
    }
}

void CompteClient::GererCompteBancaire()
{

}

void CompteClient::GererCompteEpargne()
{

}
