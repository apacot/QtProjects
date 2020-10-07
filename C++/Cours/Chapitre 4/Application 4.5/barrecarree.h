#ifndef BARRECARREE_H
#define BARRECARREE_H

#include "barre.h"

using namespace std;

/**
  @file barrecarree.h
  @brief The BarreCarree class
  @details Déclaration de la classe BarreCarree qui hérite de la classe Barre
  @author Pacot Antoine
  @date 24/09/2020
 */

class BarreCarree : public Barre
{
public:
    BarreCarree(string _reference, float _longueur, float _densite, string _nom, float _cote);
    virtual ~BarreCarree();
    float CalculerSection();
    virtual float CalculerMasse();
    virtual void AfficherCaracteristiques();
private:
    float cote;
};

#endif // BARRECARREE_H
