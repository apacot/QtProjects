#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H

#include "comptebancaire.h"
#include "compteepargne.h"

class CompteBancaire;

class CompteClient
{
private:
    CompteEpargne *unCompteEpargne;
    CompteBancaire *unCompteBancaire;
    string nom;
    int numero;
public:
    CompteClient(string _nom, int _numero);
    ~CompteClient();
    void OuvrirCompteEpargne();
    void GererCompteBancaire();
    void GererCompteEpargne();
};

#endif // COMPTECLIENT_H
