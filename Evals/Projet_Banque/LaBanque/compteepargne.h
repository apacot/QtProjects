#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

/**
 * @file compteEpargne.h
 * @author Antoine Pacot
 * @brief déclaration de la Classe compteEpargne
 * @date 08/10/2020
 */

#include "comptebancaire.h"

class CompteEpargne : public CompteBancaire
{
protected:
    float tauxInterets;
public:
    CompteEpargne(float _solde = 0, float _tauxInterets = 0.5);
    float CalculerInterets();
    void ModifierTaux(float _tauxInterets);
};

#endif // COMPTEEPARGNE_H
