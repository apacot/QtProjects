#include "jeu2048.h"

void AfficherGrille(Jeu2048 _leJeu)
{
    int grille[NB_VAL][NB_VAL];
    _leJeu.ObtenirGrille(grille);

    cout << "Score : " << _leJeu.ObtenirScore() << " | Nombre de coups : " << _leJeu.ObtenirNbCoups()-1 << endl;
    //dessine la 1ere ligne de la grille
    cout << "+" << setfill('-') << setw(7) << "+" << setw(7) << "+" << setw(7) << "+" << setw(7) << "+" << endl;

    for(int ligne=0;ligne<NB_VAL;ligne++)
    {
        for(int colonne=0;colonne<NB_VAL;colonne++)
        {
            cout << setfill(' ');
            if(grille[ligne][colonne] != 0)
            {
                cout << "|" << setw(6) << grille[ligne][colonne];
            }
            else
            {
                cout << "|" << setw(7);
            }
        }
        cout << "|" <<endl;
        //dessine les lignes intermédiaires
        cout << "+" << setfill('-') << setw(7) << "+" << setw(7) << "+" << setw(7) << "+" << setw(7) << "+" << endl;
    }
}

int main()
{        
    bool fin;
    Jeu2048 leJeu;
    char _deplacement;

    do
    {
        AfficherGrille(leJeu);
        do
        {
            cout << "Votre déplacement : H (haut), B (bas), D (droite), G (gauche) : ";
            cin >> _deplacement;
            _deplacement = toupper(_deplacement);
        }while (_deplacement != 'H' && _deplacement != 'B' && _deplacement != 'D' && _deplacement != 'G' && _deplacement != 'F');
        fin = leJeu.JouerCoup(_deplacement);

    }while(_deplacement != 'F' && !fin);

    return 0;
}
