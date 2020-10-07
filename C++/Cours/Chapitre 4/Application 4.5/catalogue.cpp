#include "catalogue.h"



Catalogue::Catalogue(const int _nbMaxBarres):nbMaxBarres(_nbMaxBarres)
{
    lesBarres = new Barre *[nbMaxBarres];
    index = 0;
}

Catalogue::~Catalogue()
{
    delete [] lesBarres;
}

bool Catalogue::AjouterBarre(Barre *ptrBarre)
{
    bool retour = true;
    if(index < nbMaxBarres)
    {
        lesBarres[index++] = ptrBarre;
    }
    else
    {
        retour = false;
    }
    return retour;
}

void Catalogue::AfficherCatalogue()
{
    for (int i = 0; i < index;i++)
    {
        lesBarres[i]->AfficherCaracteristiques();
        cout << lesBarres[i]->CalculerMasse() << endl;
        //erreur de compilation pour cette dernière ligne
    }
}
