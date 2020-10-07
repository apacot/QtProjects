#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"

using namespace std;

/**
  @file barreronde.h
  @brief The BarreRonde class
  @details Déclaration de la classe BarreRonde qui hérite de la classe Barre
  @author Pacot Antoine
  @date 24/09/2020
 */

class BarreRonde : public Barre
{
public:
    BarreRonde(string _reference, float _longueur, float _densite, string _nom, float _diametre);
    virtual ~BarreRonde();
    float CalculerSection();
    virtual float CalculerMasse();
    virtual void AfficherCaracteristiques();
private:
    float diametre;
};

#endif // BARRERONDE_H
