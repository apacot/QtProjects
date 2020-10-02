/*
 * File:   Horloge.h
 * Author: apacot
 *
 * Created on 02 octobre 2020, 10:40
 */

#ifndef HORLOGE_H
#define HORLOGE_H

#include "Clavier.h"
#include "cadran.h"
#include <time.h>
#include <iostream>

using namespace std;

enum MODES_HORLOGE
{
    AUCUN_REGLAGE=0,
    REGLAGE_HEURES,
    REGLAGE_MINUTES
};

class Horloge
{
public:
    Horloge(const int _nbModes = 3, const int _resolution = 24);
    ~Horloge();
    bool AvancerHeures();
    bool AvancerMinutes();
    void ReculerHeures();
    void ReculerMinutes();
    TOUCHES_CLAVIER Controler(TOUCHES_CLAVIER _numTouche = AUCUNE);
    void ChangerMode();
private:
    int heures;
    int minutes;
    int resolution;
    int mode;
    int nbModes;
    time_t valAvant;
    Clavier *leClavier;
    Cadran *leCadran;
};

#endif // HORLOGE_H
