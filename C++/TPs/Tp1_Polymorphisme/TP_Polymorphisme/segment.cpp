#include "segment.h"

Segment::Segment(double _longueur, double _angle, int _numero, int _vitesse):longueur(_longueur), angle(_angle)
{
    numero = _numero;
    vitesse = _vitesse;
}

void Segment::Afficher()
{
    cout << "(" << numero << ") " <<"SEGMENT L = "<< longueur << "  A = " << angle << " V = " << vitesse <<endl;
}

int Segment::ObtenirLongueur()
{
    int longueur = 0;

    return longueur;
}

int Segment::ObtenirDuree()
{
    int duree = 0;

    return duree;
}

Vecteur Segment::ObtenirVecteurArrivee()
{
    Vecteur v(0,1);

    return v;
}
