#include "jeu2048.h"

Jeu2048::Jeu2048(): nbCoups(0), score(0)
{
    srand(time(nullptr));

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            grille[i][j]=0;
        }
    }

    PlacerNouvelleTuile();

}

bool Jeu2048::JouerCoup(char _direction)
{
    direction = _direction;
    Deplacer();
    if (Calculer())
    {
        Deplacer();
    }
    CalculerScore();
    bool fin = RechercherFinDePartie();
    if(!fin)
    {
        PlacerNouvelleTuile();
    }
    return fin;
}

int Jeu2048::ObtenirNbCoups()
{
    nbCoups++;
    return nbCoups;
}

int Jeu2048::ObtenirScore()
{
    CalculerScore();
    return score;
}

void Jeu2048::ObtenirGrille(int _grille[][4])
{
    for(int i=0;i<NB_VAL;i++)
    {
        for(int j=0;j<NB_VAL;j++)
        {
            _grille[i][j]=grille[i][j];
        }
    }
}

int Jeu2048::TirerAleatoire(MODE_ALEATOIRE _mode)
{
    int val=0;

    if(_mode == POSITION)
    {
        val = (rand() &4); //par défaut, rand() %4 retourne une valeur aléatoire entre 0 et 3, ce que l'on veut
    }
    if(_mode == TUILE)
    {
        val = (((rand() %2) +1) *2); //par défaut rand() %2 retourne 0 ou 1, +1, ça retourne 1 ou 2, *2 ça retourne 2 ou 4, ce que l'on veut
    }

    return val;
}

void Jeu2048::PlacerNouvelleTuile()
{
    int ligne=0;
    int colonne=0;

    do
    {
        ligne = TirerAleatoire(POSITION);
        colonne = TirerAleatoire(POSITION);
    }
    while(grille[ligne][colonne] != 0);

    grille[ligne][colonne] = TirerAleatoire(TUILE);
}

bool Jeu2048::Calculer()
{
    bool retour = false;

    switch (direction)
    {
        case 'G':
        for (int ligne = 0; ligne<NB_VAL;ligne++)
        {
            for(int colonne = 0;colonne<NB_VAL-1;colonne++)
            {
                if(grille[ligne][colonne] == grille[ligne][colonne+1])
                {
                    grille[ligne][colonne] = grille[ligne][colonne]*2;
                    grille[ligne][colonne+1] = 0;
                }
            }            
        }
        retour=true;
        break;

        case 'D':
        for (int ligne = 0; ligne<NB_VAL;ligne++)
        {
            for(int colonne = NB_VAL-1;colonne<1;colonne--)
            {
                if(grille[ligne][colonne] == grille[ligne][colonne-1])
                {
                    grille[ligne][colonne] = grille[ligne][colonne]*2;
                    grille[ligne][colonne-1] = 0;
                }
            }
        }
        retour=true;
        break;

        case 'B':
        for(int colonne = 0; colonne < NB_VAL-1;colonne++)
        {
            for(int ligne = NB_VAL-2;ligne < 1; ligne--)
            {
                if(grille[ligne][colonne] == grille[ligne-1][colonne])
                {
                    grille[ligne][colonne] = grille[ligne][colonne]*2;
                    grille[ligne][colonne] = 0;
                }
            }
        }
        retour=true;
        break;

        case 'H':
        for(int colonne=0;colonne<NB_VAL;colonne++)
        {
            for(int ligne=0;ligne<NB_VAL-1;ligne++)
            {
                grille[ligne][colonne] = grille[ligne][colonne]*2;
                grille[ligne+1][colonne] = 0;
            }
        }
        retour=true;
        break;
    }
    return retour;
}

void Jeu2048::Deplacer()
{
    for(int i=0;i<NB_VAL;i++)
    {
        switch (direction)
        {
            case 'G':
            for (int ligne = 0; ligne<NB_VAL;ligne++)
            {
                for(int colonne = 0;colonne<NB_VAL-1;colonne++)
                {
                    if(grille[ligne][colonne] == 0)
                    {
                        grille[ligne][colonne] = grille[ligne][colonne+1];
                        grille[ligne][colonne+1] = 0;
                    }
                }
            }
            break;

            case 'D':
            for (int ligne = 0; ligne<NB_VAL;ligne++)
            {
                for(int colonne = NB_VAL-1; colonne>0;colonne--)
                {
                    if(grille[ligne][colonne] == 0)
                    {
                        grille[ligne][colonne] = grille[ligne][colonne-1];
                        grille[ligne][colonne-1] = 0;
                    }
                }
            }
            break;

            case 'B':
            for(int colonne = 0; colonne < NB_VAL;colonne++)
            {
                for(int ligne = NB_VAL-1;ligne > 0; ligne--)
                {
                    if(grille[ligne][colonne] == 0)
                    {
                        grille[ligne][colonne] = grille[ligne-1][colonne];
                        grille[ligne-1][colonne] = 0;
                    }
                }
            }
            break;

            case 'H':
            for(int colonne=0;colonne<NB_VAL;colonne++)
            {
                for(int ligne=0;ligne<NB_VAL-1;ligne++)
                {
                    grille[ligne][colonne] = grille[ligne+1][colonne];
                    grille[ligne+1][colonne] = 0;
                }
            }
            break;
        }
    }
}

void Jeu2048::CalculerScore()
{
    score = 0;

    for(int ligne=0;ligne<NB_VAL;ligne++)
    {
        for(int colonne = 0;colonne<NB_VAL;colonne++)
        {
            score = score + grille[ligne][colonne];
        }
    }
}

bool Jeu2048::RechercherFinDePartie()
{
    bool fin = false;
    int cpt = 0;

    for(int ligne=0;ligne<NB_VAL;ligne++)
    {
        for(int colonne=0;colonne<NB_VAL;colonne++)
        {
            if(grille[ligne][colonne]==2048)
            {
                fin = true;
            }
            if(grille[ligne][colonne] == 0)
            {
                cpt++;
            }
        }
    }
    if(cpt==0)
    {
        fin = true;
    }
    return fin;
}
