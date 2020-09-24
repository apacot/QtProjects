#include <iostream>
#include "IPv4.h"

using namespace std;


//TOUTES LES FONCTIONS EN COMMENTAIRE FONT PARTI DU COURS 2.2


/* void AfficherTableau(unsigned char *tab)
{
    for(int i=0;i<4;i++)
    {
        cout << static_cast<int>(tab[i]);
        if(i < 3)
        {
            cout << ".";
        }
    }
    cout << endl;
}*/

void AfficherTableau(const unsigned char *tab);

int main()
{
  /* 2.2
   *
   *  unsigned char adresse[4]={172,18,0,1};
    unsigned char masque[4];
    unsigned char reseau[4];
    unsigned char diffusion[4];
    unsigned char premiere[4];
    unsigned char derniere[4];

    IPv4 uneAdresse(adresse, 16); // instanciation de la classe IPv4

    cout << "Adresse IPv4 : ";
    AfficherTableau(adresse);
    uneAdresse.obtenirMasque(masque); // appel d'une méthode
    cout << "masque : ";
    AfficherTableau(masque);
    uneAdresse.obtenirAdresseReseau(reseau);
    cout << "Réseau : ";
    AfficherTableau(reseau);
    uneAdresse.obtenirAdresseDiffusion(diffusion);
    cout << "Diffusion : ";
    AfficherTableau(diffusion);
    uneAdresse.obtenirPremiereAdresse(premiere);
    cout << endl << "Première adresse : ";
    AfficherTableau(premiere);
    uneAdresse.obtenirDerniereAdresse(derniere);
    cout  << "Derniere adresse : ";
    AfficherTableau(derniere); */


    // 2.3


    unsigned char adresse[4] = {192, 168,1,1};
    unsigned char reseau[4];

    IPv4 * uneAdresse = new IPv4(adresse, 24); //instanciation de la classe IPv4
    IPv4 adresseCopie = *uneAdresse; // l'instance est recopiée dans une autre

    cout << "Adresse réseau avant : ";
    adresseCopie.obtenirAdresseReseau(reseau);
    AfficherTableau(reseau);

    delete uneAdresse; // destruction de la premiere instance

    cout << "Adresse réseau après destruction : ";
    adresseCopie.obtenirAdresseReseau(reseau);
    AfficherTableau(reseau);

    return 0;
}
