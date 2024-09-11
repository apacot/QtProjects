#ifndef BIBLIO2048_H
#define BIBLIO2048_H

#include <math.h>
#include <time.h>
#include <iostream>

#define NB_VAL 4
#define POSITION 0
#define TUILE 1

using namespace std;

void InitialiserGrille(int laGrille[][NB_VAL]);
void AffichagerGrille(int laGrille[][NB_VAL]);
void InitialiserAleatoire();
int TirerAleatoire(int mode);
void PlacerNouvelleTuile(int laGrille[][NB_VAL]);
void JouerCoup(char direction, int laGrille[][NB_VAL]);
void Calculer(char direction, int laGrille[][NB_VAL]);
int CalculerScore(int laGrille[][NB_VAL]);
bool RechercherFinDePartie(int laGrille[][NB_VAL]);


#endif // BIBLIO2048_H

