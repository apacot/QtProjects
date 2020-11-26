#include <QCoreApplication>
#include <iostream>

using namespace std;

template <typename T, typename R> // déclaration du type générique T
R CalculerMoyenneV2(T tab[], int nbElements)
{
    R somme = 0;
    for (int i = 0; i<nbElements;i++)
    {
        somme += tab[i];
    }
    return somme/static_cast<int>(nbElements);
}
/*  Fonction RechercherPlusPetit
 *
 * T RechercherPlusPetit(const T& a, const T& b)
{
    T retour;
    if (a < b)
    {
        retour = a;
    }else
    {
        retour = b;
    }
    return retour;
}
*/
/* Fonction CalculerMoyenne
 *
 * T CalculerMoyenne(T tab[], int nbElements)
{
    T somme = 0;
    for(int i = 0; i<nbElements;i++)
    {
        somme += tab[i];
    }
    return somme / nbElements;
}
*/


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    /* RechercherPlusPetit
    double densiteA1(12.8);
    double densiteCu(8.9);
    cout << RechercherPlusPetit<double>(densiteCu,densiteA1) << endl;
    */
    /* CalculerMoyenne
    double Temperature[5] = {12.5,25.2,14.4,18.3,20.1};
    int note[5]={11,10,13,15,14};
    cout << CalculerMoyenne<double>(Temperature,5) << endl;
    cout << CalculerMoyenne<int>(note,5) << endl;
    */
    return 0;
}
