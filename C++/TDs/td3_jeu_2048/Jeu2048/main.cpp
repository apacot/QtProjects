#include "jeu2048.h"

int main (int argc, char ** argv)
{
    int laGrille[NB_VAL][NB_VAL];
    bool finDePartie;
    char direction;
    int nbCoups;
    int score;

    InitialiserGrille(laGrille);
    finDePartie = false;

    do
    {
        PlacerNouvelleTuile(laGrille);
        AffichagerGrille(laGrille);
        cout << "Saisissez la direction";
        cin >> direction;
        JouerCoup(direction,laGrille);
        nbCoups++;
        score=CalculerScore(laGrille);
        cout << "Score :" << score;
        cout << "Nombre de coup : " << nbCoups;
        finDePartie = RechercherFinDePartie(laGrille);
    } while (finDePartie == false && direction != 'F');
}