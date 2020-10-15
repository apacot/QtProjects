#include "comptebancaire.h"

/**
 * @file compteBancaire.cpp
 * @author Antoine Pacot
 * @brief définition de la classe compteBancaire
 * @date 08/10/2020
 */

/**
 * @brief CompteBancaire::CompteBancaire
 * @details Méthode pour la création du compte bancaire, par défault, le solde est à 0, mais le montant initial peut-être défini
 * @param _solde
 * @author Antoine Pacot
 */
CompteBancaire::CompteBancaire(float _solde):solde(_solde)
{

}

/**
 * @brief CompteBancaire::Deposer
 *        Méthode pour déposer de l'argent sur son compte bancaire
 * @author Antoine Pacot
 * @details  Cette méthode prends le montant passé en paramètre et l'ajoute au solde du compte
 * @param _montant
 */
void CompteBancaire::Deposer(float _montant)
{
    solde += _montant; //correspond à solde = solde + _montant;
}

/**
 * @brief CompteBancaire::Retirer
 *        Méthode pour retirer de l'argent de son compte bancaire
 * @author Antoine Pacot
 * @details Cette méthode prends le montant passé en paramètre, et valide le retrait que si le montant n'est pas supérieur au solde du compte
 * @param _montant
 * @return retour = false si le montant demandé est supérieur au solde, et retour = true sinon
 */
bool CompteBancaire::Retirer(float _montant)
{
    bool retour = true;

    if(_montant > solde)
    {
        retour = false;
    }
    else
    {
        solde = solde -_montant;
        retour = true;
    }

    return retour;
}

/**
 * @brief CompteBancaire::ConsulterSolde
 *        Méthode pour consulter le solde de son compte
 * @author Antoine Pacot
 * @return le solde du compte sous forme de valeur réelle
 */
float CompteBancaire::ConsulterSolde()
{
    return solde;
}
