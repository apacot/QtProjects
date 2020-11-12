/**
  @file segment.h
  @brief Déclaration de la classe Segment
  @author Antoine Pacot
  @date 15/10/2020
  */
#ifndef SEGMENT_H
#define SEGMENT_H

#include "element.h"

/** La classe Segment hérite de la classe Element */
class Segment : public Element
{
private:
    /** La longueur du segment */
    double longueur;
    /** La taille de l'angle */
    double angle;
public:
    Segment(double _longueur, double _angle, int _numero, int _vitesse);
    void Afficher();
    virtual int ObtenirLongueur();
    virtual int ObtenirDuree();
    virtual Vecteur ObtenirVecteurArrivee();
};

#endif // SEGMENT_H
