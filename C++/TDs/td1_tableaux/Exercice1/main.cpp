#include <iostream>
#define NB_ELEVES 5
using namespace std;

int main()
{
    float notes[NB_ELEVES];
    int i;
    float somme;
    int nbSup10;
    float mini;
    float maxi;
    float moyenne;

    somme = 0.0;
    nbSup10 = 0;
    mini = 20.0;
    maxi = 0.0;
    moyenne = 0;

   cout <<"Donnez les notes des élèves : " << endl;
   for (i=0;i<NB_ELEVES;i++)
   {

       cin >> notes[i];
       if(notes[i] < mini)
       {
           mini = notes[i];
       }
       if(notes[i] > maxi)
       {
           maxi = notes[i];
       }
       if(notes[i]>=10)
       {
           nbSup10++;
       }
       somme = somme + notes[i];
   }
   moyenne = somme/NB_ELEVES;

   //Affichage
   for(i=0;i<NB_ELEVES;i++)
   {
       cout <<"l'élève numéro "<<i<<" a eu la note "<< notes[i]<<"/20"<< endl;
   }
   cout <<endl; //saut de ligne

   cout << "la note la plus haute est : " << maxi <<"/20" << endl;
   cout << "la note la plus basse est : " << mini <<"/20" << endl;
   cout << "la moyenne est de : " << moyenne << "/20" << endl;
   cout << "nombre de note supérieur ou égal à 10 : " << nbSup10 << endl;
 }




