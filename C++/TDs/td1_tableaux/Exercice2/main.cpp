#include <iostream>
#include <iomanip>

using namespace std;

#define NB_VAL 8

int main()
{
    int tab[NB_VAL] = {10, 12, 45, 29, 31, 45, 5, 8};
    int SaveVal;
    int i;
    int j;

    cout << "Les 8 valeurs du tableau sont : " << endl;

    for (i=0;i<NB_VAL;i++) //boucle affichage des valeurs initiales
    {
        cout << tab[i] << " | ";
    }
    cout << endl;
    SaveVal = tab[NB_VAL-1]; //sauvegarde de la derniere valeur du tableau
    cout << endl <<"Permutation circulaire : " << endl;

    for (j=0; j<NB_VAL; j++) //boucle de répétition de la permutation
    {
        for (i=NB_VAL-1;i>0;i--) // Permutation circulaire des valeurs
        {
            tab[i] = tab[i-1];
        }
        tab[0]=SaveVal;
        SaveVal = tab[NB_VAL-1]; //sauvegarde de la derniere valeur du tableau

        for(i=0;i<NB_VAL;i++) //boucle d'affichage de la permutation
        {
            cout << setfill(' ');
            cout << setw(2) << tab[i] << " | ";
        }
        cout << endl;
    }


}
