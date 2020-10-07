#include "barrerectangle.h"

/**
  @file barrerectangle.cpp
  @brief BarreRectangle::BarreRectangle
  @details Constructeur de la classe BarreRectangle
  @param _reference
  @param _longueur
  @param _densite
  @param _nom
  @param _hauteur
  @param _largeur
 */
BarreRectangle::BarreRectangle(string _reference, float _longueur, float _densite, string _nom, float _hauteur, float _largeur) :
    Barre(_reference, _longueur, _densite, _nom),
    hauteur(_hauteur),
    largeur(_largeur)
{

}

/**
  @file barrerectangle.cpp
  @brief BarreRectangle::~BarreRectangle
  @details Destructeur de la classe BarreRectangle
 */
BarreRectangle::~BarreRectangle()
{

}

/**
  @file barrerectangle.cpp
  @brief BarreRectangle::CalculerSection
  @return section
  @details Fonction quie calcule la section de la barre
 */
float BarreRectangle::CalculerSection()
{
    return hauteur * largeur;
}

/**
  @file barrerectangle.cpp
  @brief BarreRectangle::CalculerMasse
  @return masse
  @details Focntion qui calcule la masse de la barre en focntion de la longeur, de la section et de la densité
 */
float BarreRectangle::CalculerMasse()
{
    return longueur * CalculerSection() * densite;
}
