/*
 * File:   Horloge.cpp
 * Author: apacot
 *
 * Created on 02 octobre 2020, 10:40
 */

#include "horloge.h"

Horloge::Horloge(const int _nbModes, const int _resolution):heures(0), minutes(0), nbModes(_nbModes), resolution(_resolution)
{
    leCadran = new Cadran(5, 5);
    leClavier = new Clavier();
    valAvant = time(NULL);
}

Horloge::~Horloge()
{
    delete leCadran;
    delete leClavier;
}

bool Horloge::AvancerHeures()
{
    bool retour = false;

    heures++;
    if(resolution == 12 && heures == 12)
    {
        heures = 0;
        retour = true;
    }
    if(resolution == 24 && heures == 24)
    {
        heures = 0;
        retour = true;
    }
}

bool Horloge::AvancerMinutes()
{
    bool retour = false;

    minutes++;
    if(minutes == 60)
    {
        heures++;
        minutes = 0;
        retour = true;
    }
    return retour;
}

void Horloge::ReculerHeures()
{
    heures--;
}

void Horloge::ReculerMinutes()
{
    minutes--;
}

TOUCHES_CLAVIER Horloge::Controler(TOUCHES_CLAVIER _numTouche)
{

}

void Horloge::ChangerMode()
{
    mode = (mode +1)%nbModes;
}
