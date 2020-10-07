#include "barrecarree.h"

/**
  @file barrecarree.cpp
  @brief BarreCarree::BarreCarree
  @details Contructeur de la classe BarreCarree
  @param _reference
  @param _longueur
  @param _densite
  @param _nom
  @param _cote

 */
BarreCarree::BarreCarree(string _reference, float _longueur, float _densite, string _nom, float _cote) :
    Barre(_reference, _longueur, _densite, _nom),
    cote(_cote)
{
    cout << "Appel du constructeur de BarreCarree" << endl;
}

/**
  @file barrecarree.cpp
  @brief BarreCarree::~BarreCarree
  @details Destructeur de la classe BarreCarree
 */
BarreCarree::~BarreCarree()
{
    cout << "Appel du desctructeur de BarreCarree" << endl;
}

/**
  @file barrecarre.cpp
  @brief BarreCarree::CalculerSection
  @return section
  @details Fonction qui calcule la section de la barre
 */
float BarreCarree::CalculerSection()
{
    return cote * cote;
}

/**
  @file barrecarree.cpp
  @brief BarreCarree::CalculerMasse
  @return masse
  @details Fonction qui calcule la masse de la barre en fonction de la section, de la longueur et de la densité
 */
float BarreCarree::CalculerMasse()
{
    return longueur * CalculerSection() * densite;
}

void BarreCarree::AfficherCaracteristiques()
{
    cout << endl << "Référence : " << reference << endl;
    cout <<  "Longeur : " << longueur << " cm" << endl;
    cout << "Densité : " << densite << " g/cm3" << endl;
    cout << "Coté du carré : " << cote << " cm" << endl;
    cout << "Le poids de la barre est : " << CalculerMasse() /1000.0 << " kg" <<endl << endl;
}
