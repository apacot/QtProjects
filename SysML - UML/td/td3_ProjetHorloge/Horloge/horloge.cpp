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
    _numTouche = leClavier->ScruterClavier();
    if(_numTouche == mode)
    {
        ChangerMode();
    }

    switch(mode)
    {
    case AUCUN_REGLAGE :
        ActualiserHeure();
        leCadran->Afficher(heures,1);
        leCadran->Afficher(minutes,4);
        break;
    case REGLAGE_HEURES :
        if(_numTouche == PLUS)
        {
            AvancerHeures();
        }
        if(_numTouche == MOINS)
        {
            ReculerHeures();
        }
        leCadran->Afficher("HH",1);
        leCadran->Afficher(heures,4);
        break;
    case REGLAGE_MINUTES :
        if(_numTouche == PLUS)
        {
            AvancerMinutes();
        }
        if(_numTouche == MOINS)
        {
            ReculerMinutes();
        }
        leCadran->Afficher("MM",1);
        leCadran->Afficher(minutes,4);
        break;

    }
    return _numTouche;
}

void Horloge::ChangerMode()
{
    mode = (mode +1)%nbModes;
}

void Horloge::ActualiserHeure()
{
    time_t valCourante = time(NULL);
    double seconde = difftime(valCourante, valAvant);

    if(seconde > 1) // à modifier pour aller plus vite pendant le test
    {
        valAvant = valCourante;
        if (AvancerMinutes())
        {
            AvancerHeures();

        }
    }
}
