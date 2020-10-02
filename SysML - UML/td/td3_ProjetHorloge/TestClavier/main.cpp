/*
 * File:   main.cpp
 * Author: apacot
 *
 * Created on 02 octobre 2020, 17:11
 */

#include "Clavier.h"

int main()
{
    Clavier leClavier;

    TOUCHES_CLAVIER touche;

    do
    {
        touche = leClavier.ScruterClavier();
        if(touche != AUCUNE)
        {
            cout << touche << endl;
        }

    }while(touche != FIN);


    return 0;
}
