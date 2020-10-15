/**
  @file element.h
  @brief Déclaration de la classe Element
  @author Antoine Pacot
  @date 15/10/2020
  */

#ifndef ELEMENT_H
#define ELEMENT_H

#include <iostream>

using namespace std;

class Element
{
protected:
    int numero;
    int vitesse;
public:
    Element(int _numero = 0, int _vitesse = 0);
    virtual ~Element();
    virtual void Afficher();
    int getNumero() const;
    void setNumero(int value);
    int getVitesse() const;
    void setVitesse(int value);
};

#endif // ELEMENT_H
