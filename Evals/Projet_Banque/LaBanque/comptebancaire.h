#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H


/**
 * @file compteBancaire.h
 * @author Antoine Pacot
 * @brief déclaration de la Classe compteBancaire
 * @date 08/10/2020
 */

#include "menu.h"

class CompteBancaire
{
protected:
    //solde du compte
    float solde;
public:
    CompteBancaire(float _solde = 0);
    void Deposer(float _montant);
    bool Retirer(float _montant);
    float ConsulterSolde();
};

#endif // COMPTEBANCAIRE_H
