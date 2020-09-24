#include <iostream>
#include <fonctions.h>
using namespace std;

#define NB_ACQUIS 10

int main()
{
    float valeursBrutes[NB_ACQUIS];
    float valeursMoyenne[NB_ACQUIS-2];
    int i;
    float moyenne;


    cout << "Donnez vos valeurs brutes" << endl;

    for (i=0;i<NB_ACQUIS;i++) //demander les valeurs 1 par 1 et les ranger dans le tableau
    {
        cin >> valeursBrutes[i];
    }

    for (i=0;i<NB_ACQUIS-2;i++)
    {
        moyenne = (valeursBrutes[i] + valeursBrutes [i+1] + valeursBrutes[i+2])/3; // calcul de la moyenne glissante
        valeursMoyenne[i] = moyenne;
    }
    afficherTableau(valeursBrutes,NB_ACQUIS);
    afficherTableau(valeursMoyenne,NB_ACQUIS);


}
