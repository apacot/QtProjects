#ifndef VECTEUR_H
#define VECTEUR_H

#include "element.h"

class Vecteur
{
private:
    double x;
    double y;
public:
    Vecteur(double _x, string _y);
    Vecteur operator+(string _autre);
    Vecteur operator-(string _autre);
    void Afficher();
    double getX() const;
    void setX(double value);
    double getY() const;
    void setY(double value);
};

#endif // VECTEUR_H
