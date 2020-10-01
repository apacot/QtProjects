#include "cadran.h"

int main()
{
    Cadran leCadran;
    Cadran unAutreCadran(10,10,2,20);
    string fin="Fin";
    //pour bloquer le programme et que le cadran reste visible
    //char touche;
    //cin >> touche;
    //affichage du compteur
/*
    for(int i=0;i<11;i++)
    {
        leCadran.Afficher(i,3,1); //affiche la valeur de i, en position 3 sur la ligne 1
        sleep(1); //pause de 1 seconde entre chaque affichage pour faire un compteur
    }
*/
    for(int i=10;i>=0;i--)
    {
        unAutreCadran.Afficher(i,5,2); // affiche la valeur de i, en position 5 sur la ligne 2
        sleep(1); //pause de 1 seconde entre chaque affichage pour faire un compteur
        if(i==0)
        {
            unAutreCadran.Afficher(fin,3,2); //affiche le contenu de la variable fin sur unAutreCadran en position 3 sur la ligne 2
        }
    }
    //leCadran.Afficher(fin,1,1); //affiche le contenu de la variable fin sur leCadran en position 1 sur la ligne 1

    sleep(1);//pause pour avoir le temps de voir avant que ce soit effacer
    //leCadran.Effacer(); //efface le contenu de leCadran
    unAutreCadran.Effacer(); //efface le contenu de unAutreCadran

}
