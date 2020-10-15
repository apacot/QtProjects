/**
  @file trajectoire.cpp
  @brief implémentation de la classe Trajectoire
  @author Antoine Pacot
  @date 15/10/2020
  @details Classe modélisant la trajectoire
  */

#include "trajectoire.h"

/**
 * @brief Trajectoire::Trajectoire
 * @details Constructeur de la classe Trajectoire
 * @param _nbEtapesMaxi
 * @author Antoine Pacot
 */
Trajectoire::Trajectoire(int _nbEtapesMaxi):nbEtapesMax(_nbEtapesMaxi)
{
    parcours = new Element *[_nbEtapesMaxi];
}

/**
 * @brief Trajectoire::~Trajectoire
 * @details Destructeur de la Classe
 * @author Antoine Pacot
 */
Trajectoire::~Trajectoire()
{
    delete [] parcours;
}

/**
 * @brief Trajectoire::Ajouter
 * @details Méthode pour ajouter un élément à la trajectoire
 * @param _pElement
 * @author Antoine Pacot
 * @return true si l'élément a bien été ajouté, et false sinon
 */
bool Trajectoire::Ajouter(Element *_pElement)
{
    bool retour = true;
    if(prochaineEtape < nbEtapesMax)
    {
        _pElement->setNumero(prochaineEtape+1);
        parcours[prochaineEtape++] = _pElement;
    }
    else
    {
        retour = false;
    }
    return retour;
}

/**
 * @brief Trajectoire::Afficher
 * @details Méthode pour afficher les éléments de la trajectoire
 * @author Antoine Pacot
 */
void Trajectoire::Afficher()
{
    cout << "Trajectoire :" << endl << endl;
    for(int i=0;i<prochaineEtape;i++)
    {
        parcours[i]->Afficher();
    }
}
