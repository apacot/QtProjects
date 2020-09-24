#include <iostream>
using namespace std;

void afficherTableau(float Donnees[],int nbElements)
{
    int i;
    for (i = 0 ; i < nbElements ; i++)
    {
       cout << Donnees[i] << " | ";
    }
    cout << endl;
}
