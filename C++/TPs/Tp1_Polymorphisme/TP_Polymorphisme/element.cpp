/**
  @file element.cpp
  @brief implémentation de la classe Element
  @author Antoine Pacot
  @date 15/10/2020
  */

#include "element.h"

/**
 * @brief Element::Element
 * @details Constructeur de la classe Element
 * @author Antoine Pacot
 */
Element::Element(int _numero, int _vitesse):numero(_numero),vitesse(_vitesse)
{

}

/**
 * @brief Element::~Element
 * @details Destructeur de la classe Element
 * @author Antoine Pacot
 */
Element::~Element()
{

}

/**
 * @brief Element::Afficher
 * @details Méthode pour afficher les caractéristiques de la classe Element
 * @author Antoine Pacot
 */
void Element::Afficher()
{

}

int Element::getNumero() const
{
    return numero;
}

void Element::setNumero(int value)
{
    numero = value;
}

int Element::getVitesse() const
{
    return vitesse;
}

void Element::setVitesse(int value)
{
    vitesse = value;
}
