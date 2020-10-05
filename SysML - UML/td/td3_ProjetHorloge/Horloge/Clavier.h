/* 
 * File:   Clavier.h
 * Author: apacot
 *
 * Created on 02 octobre 2020, 10:40
 */

#ifndef CLAVIER_H
#define CLAVIER_H

#include <termios.h> //sous  windows --> <conio.h> --> fonction kbhit
#include <unistd.h>
#include <iostream>

using namespace std;

enum TOUCHES_CLAVIER
    {
        AUCUNE,
        FIN,
        MODE,
        PLUS,
        MOINS
    };

class Clavier {
public:
    Clavier();
    ~Clavier();    
    TOUCHES_CLAVIER ScruterClavier();
    
private:
    struct termios etatInitial ;

};

#endif /* CLAVIER_H */

