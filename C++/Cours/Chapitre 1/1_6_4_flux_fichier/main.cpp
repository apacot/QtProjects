#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string nomFichier;

    cout << "Entrer le nom du fichier à lire : ";
    cin >> nomFichier;

    ifstream fichier(nomFichier, fstream::in | fstream::out); // pour que les variables in et out (lecture et écriture) soient contenus dans fstream et non dans std

    string pays;
    int gold,argent,bronze;

    if(!fichier.is_open())
    {
        cerr <<"erreur lors de l'ouverture du fichier" << endl; //affiche un message d'erreur si l'ouverture du fichier à echoué
    }
    else
    {
        // 1ere ligne de la mise en page
        cout << "+" << setfill('-') << setw(18) << "+" << setfill('-') << setw(6) << "+" << setfill('-') << setw(6) << "+" << setfill('-') << setw(6) << "+" <<setfill(' ') << endl;

        do //boucle d'affichage des données
        {
            fichier >> pays >> gold >> argent >> bronze; // le fichier contient sur chaque ligne un pays + nombre de médailles

            if(fichier.good()) // si les valeurs ont bien été lu
            {
                //avec mise en page
                cout << "| " << setw(17) << left << pays << "|" << right << setw(5) << gold << "|" << setw(5) << argent << "|" << setw(5) << bronze << "|" << endl;

                //sans mise en page
                //cout << pays << "\t" << gold << "\t" << argent <<"\t"  << bronze << endl;
            }
        }while(!fichier.eof());

        // derniere ligne de mise en page
        cout << "+" << setfill('-') << setw(18) << "+" << setfill('-') << setw(6) << "+" << setfill('-') << setw(6) << "+" << setfill('-') << setw(6) << "+" <<setfill(' ') << endl;
    }
    return 0;
}
