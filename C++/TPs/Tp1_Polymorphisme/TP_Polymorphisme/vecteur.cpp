#include "vecteur.h"

using namespace std;

Vecteur::Vecteur(double _x, double _y):x(_x),y(_y)
{

}

void Vecteur::Afficher()
{
    cout << "x :" << x <<endl << "y :" << y << endl;
}

double Vecteur::getY() const
{
    return y;
}

void Vecteur::setY(double value)
{
    y = value;
}

double Vecteur::getX() const
{
    return x;
}

void Vecteur::setX(double value)
{
    x = value;
}
