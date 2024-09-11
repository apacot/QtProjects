#include "jeu2048.h"

void InitialiserGrille(int laGrille[][NB_VAL])
{
    int ligne, colonne;

    for(ligne=0;ligne<NB_VAL;ligne++)
    {
        for(colonne=0;colonne<NB_VAL;colonne++)
        {
            laGrille[ligne][colonne] = 0;
        }
    }
}

void AffichagerGrille(int laGrille[][NB_VAL])
{
    int ligne, colonne;

    for(ligne=0;ligne<NB_VAL;ligne++)
    {
        for(colonne=0;colonne<NB_VAL;colonne++)
        {
            if(laGrille[ligne][colonne]!=0)
            {
                cout << laGrille[ligne][colonne];
            }
            else
            {
                cout << " ";
            }
        }
    }
}

void InitialiserAleatoire()
{
     srand(time(nullptr));
}

int TirerAleatoire(int mode)
{
    if(mode == POSITION)
    {
        return (((rand() % 2) +1 ) * 2);
    }
    if(mode == TUILE)
    {
        return (((rand() % 2) +1 ) * 2);
    }
}

void PlacerNouvelleTuile(int laGrille[][NB_VAL])
{
    int ligne, colonne;

    do
    {
        ligne = TirerAleatoire(POSITION);
        colonne = TirerAleatoire(POSITION);
    } while (laGrille[ligne][colonne] =! 0);
    laGrille[ligne][colonne] = TirerAleatoire(TUILE);
    
}

void JouerCoup(char direction, int laGrille[][NB_VAL])
{
    int i;
    int ligne;
    int colonne;

    for(i=0;i<NB_VAL;i++)
    {
        switch (direction)
        {
        case 'G':
            for(ligne = 0; ligne<NB_VAL;ligne++)
            {
                for(colonne=0;colonne<(NB_VAL-1);colonne++)
                {
                    if(laGrille[ligne][colonne]==0)
                    {
                        laGrille[ligne][colonne]=laGrille[ligne][colonne+1];
                        laGrille[ligne][colonne+1]=0;
                    }
                }
            }
            break;
        case 'D':
            for(ligne = 0; ligne<NB_VAL;ligne++)
            {
                for(colonne=NB_VAL-2;colonne<2;colonne--)
                {
                    if(laGrille[ligne][colonne]==0)
                    {
                        laGrille[ligne][colonne]=laGrille[ligne][colonne-1];
                        laGrille[ligne][colonne-1]=0;
                    }
                }
            }
            break;
            
        case 'B':
            for(colonne = 0; colonne<NB_VAL;colonne++)
            {
                for(ligne=NB_VAL-2;ligne<2;ligne--)
                {
                    if(laGrille[ligne][colonne]==0)
                    {
                        laGrille[ligne][colonne]=laGrille[ligne-1][colonne];
                        laGrille[ligne-1][colonne]=0;
                    }
                }
            }
            break;
        case 'H':
            for(colonne = 0; colonne<NB_VAL;colonne++)
            {
                for(ligne=0;ligne<NB_VAL-1;ligne++)
                {
                    if(laGrille[ligne][colonne]==0)
                    {
                        laGrille[ligne][colonne]=laGrille[ligne+1][colonne];
                        laGrille[ligne+1][colonne]=0;
                    }
                }
            }
            break;
        default:
            break;
        }
    }
}

void Calculer(char direction, int laGrille[][NB_VAL])
{
    int ligne;
    int colonne;

    switch (direction)
    {
    case 'G':
        for(ligne = 0; ligne<NB_VAL;ligne++)
        {
            for(colonne=0;colonne<NB_VAL-1;colonne++)
            {
                if(laGrille[ligne][colonne]==laGrille[ligne][colonne+1])
                {
                    laGrille[ligne][colonne]=laGrille[ligne][colonne]*2;
                    laGrille[ligne][colonne+1]=0;
                }
            }
        }
        break;
    case 'D':
        for(ligne = 0; ligne<NB_VAL;ligne++)
        {
            for(colonne=NB_VAL-2;colonne<2;colonne--)
            {
                if(laGrille[ligne][colonne]==laGrille[ligne][colonne-1])
                {
                    laGrille[ligne][colonne]=laGrille[ligne][colonne]*2;
                    laGrille[ligne][colonne-1]=0;
                }
            }
        }
        break;
            
    case 'B':
        for(colonne = 0; colonne<NB_VAL;colonne++)
        {
            for(ligne=NB_VAL-2;ligne<2;ligne--)
            {
                if(laGrille[ligne][colonne]==laGrille[ligne-1][colonne])
                {
                    laGrille[ligne][colonne]=laGrille[ligne][colonne]*2;
                    laGrille[ligne-1][colonne]=0;
                }
            }
        }
        break;
    case 'H':
        for(colonne = 0; colonne<NB_VAL;colonne++)
        {
            for(ligne=0;ligne<NB_VAL-1;ligne++)
            {
                if(laGrille[ligne][colonne]==laGrille[ligne+1][colonne])
                {
                    laGrille[ligne][colonne]=laGrille[ligne][colonne]*2;
                    laGrille[ligne+1][colonne]=0;
                }
            }
        }
        break;
    default:
        break;
    }
}

int CalculerScore(int laGrille[][NB_VAL])
{
    int somme = 0 ;
    int ligne, colonne;

    for(ligne=0;ligne<NB_VAL;ligne++)
    {
        for(colonne=0;colonne<NB_VAL;colonne++)
        {
            somme = somme + laGrille[ligne][colonne];
        }
    }
    return somme;
}

bool RechercherFinDePartie(int laGrille[][NB_VAL])
{
    bool fin = false;
    int cpt = 0;
    int ligne,colonne;
    for(ligne=0;ligne<NB_VAL;ligne++)
    {
        for(colonne=0;colonne<NB_VAL;colonne++)
        {
            if(laGrille[ligne][colonne] == 2048)
            {
                fin = true;
            }
            if(laGrille[ligne][colonne] == 0)
            {
                cpt++;
            }
        }
    }
    if(cpt == 0)
    {
        fin = true;
    }
    return fin;
}
