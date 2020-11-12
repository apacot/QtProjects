#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>

class Vecteur
{
private:
    double x;
    double y;
public:
    Vecteur(double _x, double _y);
    Vecteur operator+(Vecteur &_autre);
    Vecteur operator-(Vecteur &_autre);
    void Afficher();
    double getX() const;
    void setX(double value);
    double getY() const;
    void setY(double value);
};

#endif // VECTEUR_H
