#include "compteepargne.h"

/**
 * @file compteEpargne.cpp
 * @author Antoine Pacot
 * @brief définition de la classe compteEpargne
 * @date 08/10/2020
 */

/**
 * @brief CompteEpargne::CompteEpargne
 *        Méthode pour la création du compte Epargne, par défault, le solde est à 0 et le tauxInterets est à 0.5%
 * @author Antoine Pacot
 * @param _solde
 * @param _tauxInterets
 */
CompteEpargne::CompteEpargne(float _solde, float _tauxInterets):CompteBancaire(_solde),tauxInterets(_tauxInterets)
{

}

/**
 * @brief CompteEpargne::CalculerInterets
 *        Méthode pour calculer le gain apporté par les interêts, utilisée periodiquement
 * @author Antoine Pacot
 * @details Cette méthode prends en paramètre le taux d'interets et calcule le gain apporté avec la formule, solde * tauxInteret /100 (le taux est en pourcentage)
 * @param _tauxInterets
 * @return
 */
float CompteEpargne::CalculerInterets()
{
    float gainInterets;

    gainInterets = solde * tauxInterets/100;

    return gainInterets;
}

/**
 * @brief CompteEpargne::ModifierTaux
 *        Méthode pour modifier le taux d'intérêts du compte
 * @author Antoine Pacot
 * @details Cette méthode prends en paramètre le nouveaux taux d'interet et le modifie sur le compteEpargne
 * @param _tauxInterets
 */
void CompteEpargne::ModifierTaux(float _tauxInterets)
{
    tauxInterets = _tauxInterets;
}
