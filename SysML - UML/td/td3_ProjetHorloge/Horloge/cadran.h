/**
  * @file   :   cadran.h
  * @author :   Philippe Cruchet
  * @date   :   24/08/2020
  * @detail :   Assure la gestion d'un cadran en mode texte
  *             à partir des séquences d’échappement ANSI
  */

#ifndef CADRAN_H
#define CADRAN_H

#include <iostream>
#include <iomanip>
#include <string>
#include <unistd.h>

using namespace std;

enum couleurTexte
{
    NOIR_FG = 30, //FG pour frontground donc le texte
    ROUGE_FG,
    VERT_FG,
    JAUNE_FG,
    BLEU_FG,
    MAGENTA_FG,
    CYAN_FG,
    BLANC_FG
};

enum couleurFond
{
    NOIR_BG = 40, //BG pour background donc le fond
    ROUGE_BG,
    VERT_BG,
    JAUNE_BG,
    BLEU_BG,
    MAGENTA_BG,
    CYAN_BG,
    BLANC_BG

};

class Cadran
{
public:
    Cadran(const int _posX=1,const int _posY=1,const int _hauteur=1,const int _largeur=7, const int _couleurFond = 42 , const int _couleurTexte = 33);
    ~Cadran();
    void Afficher(const string _texte, const int _position=0, const int _hauteur=1);
    void Afficher(const int _valeur, const int _position=0, const int _hauteur=1);
    void Effacer();
private:
    void PositionnerCurseur(const int _posx, const int _posy);
    int posX;   /// coordonnée en X du premier caractère dans le cadran
    int posY;   /// coordonnée en Y du premier caractère dans le cadran
    int hauteur;    /// nombre de lignes du cadran
    int largeur;    /// nombre de caractères par ligne
    int couleurTexte;
    int couleurFond;
};

#endif // CADRAN_H
