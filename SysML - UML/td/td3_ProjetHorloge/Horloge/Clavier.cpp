/* 
 * File:   Clavier.cpp
 * Author: apacot
 *
 * Created on 02 octobre 2020, 10:40
 */

#include <cstdio>

#include "Clavier.h"

Clavier::Clavier()
{
    struct termios etatCourant;

    tcgetattr(STDIN_FILENO, &etatInitial);
    etatCourant = etatInitial;
    etatCourant.c_lflag &= ~ICANON;
    etatCourant.c_lflag &= ~ECHO;
    etatCourant.c_lflag &= ~ISIG;
    etatCourant.c_oflag &= ~NL0;
    etatCourant.c_oflag &= ~CR0;
    etatCourant.c_oflag &= ~TAB0;
    etatCourant.c_oflag &= ~BS0;
    etatCourant.c_cc[VMIN] = 0;
    etatCourant.c_cc[VTIME] = 0;
    tcsetattr(STDIN_FILENO, TCSANOW, &etatCourant);
//    read(STDIN_FILENO, &toucheAvant, 1);
//    touche = toucheAvant;
}

Clavier::~Clavier()
{
    tcsetattr(STDIN_FILENO, TCSANOW, &etatInitial);
}

TOUCHES_CLAVIER Clavier::ScruterClavier() 
{
    
    TOUCHES_CLAVIER retour = AUCUNE;
    char touche = 0;
    int test = read(STDIN_FILENO, &touche, 1);

    if (test != -1)
    {
        switch(touche)
        {
        case 'p': //raccourcis pour +
        case '+': retour= PLUS;
            break;
        case 'm': //raccourcis pour -
        case '-': retour= MOINS;
            break;
        case ' ': retour= MODE;
            break;
        case '\r': // même chose que \n
        case '\n': retour = FIN;
            break;
        default : retour = AUCUNE;
        }
    }
    return retour;
}

