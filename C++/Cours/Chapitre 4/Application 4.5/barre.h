#ifndef BARRE_H
#define BARRE_H

#include <string>
#include <iostream>
#include "barrecarree.h"
#include "barrerectangle.h"
#include "barreronde.h"
#include "menu.h"

using namespace std;

/**
  @file barre.h
  @brief The Barre class
  @details Déclaration de la classe mère Barre
  @author Antoine Pacot
  @date 24/09/2020
 */

class Barre
{
public:
    Barre(string _reference, float _longueur, float _densite, string _nom);
    virtual ~Barre();
    virtual void AfficherCaracteristiques() = 0;
    virtual float CalculerMasse() = 0; //fonction virtuelle pure
protected :
    string reference;
    float longueur;
    float densite;
    string nom;
};

#endif // BARRE_H
