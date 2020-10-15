/**
  @file trajectoire.h
  @brief Déclaration de la classe Trajectoire
  @author Antoine Pacot
  @date 15/10/2020
  */

#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H

#include "element.h"

class Trajectoire
{
private:
    Element **parcours;
    int nbEtapesMax;
    int prochaineEtape =0;
public:
    Trajectoire(int _nbEtapesMaxi);
    ~Trajectoire();
    bool Ajouter(Element *_pElement);
    void Afficher();
};

#endif // TRAJECTOIRE_H
