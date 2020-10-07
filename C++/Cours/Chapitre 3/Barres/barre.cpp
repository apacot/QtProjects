#include "barre.h"

/**
  @file barre.cpp
  @brief Barre::Barre
  @details Constructeur de la classe Barre
  @param _reference
  @param _longueur
  @param _densite
  @param _nom
 */
Barre::Barre(string _reference, float _longueur, float _densite, string _nom) :
    reference(_reference),
    longueur(_longueur),
    densite(_densite),
    nom(_nom)
{

}

/**
  @file barre.cpp
  @brief Barre::~Barre
  @details Destructeur de la classe Barre
 */
Barre::~Barre()
{

}

/**
  @file barre.cpp
  @brief Barre::AfficherCaracteristiques
  @details Fonction qui affiche les caractérisques de la barre
 */
void Barre::AfficherCaracteristiques(){
    cout << "référence : " << reference << endl;
    cout <<  "longeur : " << longueur << "cm" << endl;
    cout << "densité : " << densite << endl;
    cout << "nom de l'alliage : " << nom << endl;
}
