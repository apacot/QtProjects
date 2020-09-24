#ifndef JEU2048_H
#define JEU2048_H

#include <iostream>
#include <math.h>
#include <time.h>
#include <iomanip>
using namespace std;

#define NB_VAL 4

enum MODE_ALEATOIRE
{
    POSITION,
    TUILE
};

class Jeu2048
{
private:
    int grille[NB_VAL][NB_VAL];
    char direction;
    int nbCoups;
    int score;

public:
    Jeu2048();
    bool JouerCoup(char _direction);
    int ObtenirNbCoups();
    int ObtenirScore();
    void ObtenirGrille(int _grille[][NB_VAL]);

private:
    int TirerAleatoire(MODE_ALEATOIRE _mode);
    void PlacerNouvelleTuile();
    bool Calculer();
    void Deplacer();
    void CalculerScore();
    bool RechercherFinDePartie();
};

#endif // JEU2048_H
