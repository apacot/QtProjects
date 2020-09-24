#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

class Menu
{
private:
    //nom du fichier à ouvrir pour créer le menu
    string nom;
    // pointeur sur tableau des items
    string *options;
    //nombre d'items du menu
    int nbOptions;
    //la plus grande longueur d'une option
    int longueurMax;

public:

    Menu(const string &_nom);
    ~Menu();
    int Afficher();
    static void AttendreAppuiTouche();
};
class Exception
{
public:
    Exception(int _code, string _message)
    int ObtenirCodeErreur() const;

};

#endif // MENU_H
