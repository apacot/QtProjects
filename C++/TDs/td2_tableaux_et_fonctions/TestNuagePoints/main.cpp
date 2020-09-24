#include <iostream>

using namespace std;

#define NB_RELEVE 5

int main()
{
    unsigned int tabVal[NB_RELEVE];
    unsigned int moyenne=0;
    unsigned int valMin;
    unsigned int valMax;
    int i=0,j=0,iMax,iMin;

    cout << "Donnez vos valeurs :" << endl;

    for (i=0;i<NB_RELEVE;i++)
    {
        cin >> tabVal[i];
        if (tabVal[i]<0 || tabVal[i]>4095)
        {
            cout << "valeur incorrecte, veuillez la resaisir" << endl;
            do
            {
                cin >> tabVal[i];
            }
            while(tabVal[i]<0 || tabVal[i]>4095);
        }
        if(tabVal[i]>=0 && tabVal[i]<=4095)
        {
            cout << "valeur correcte" << endl;
        }

    }
    valMin = tabVal[j];
    for (j=0;j<NB_RELEVE;j++)
    {
        if(tabVal[j]<valMin)
        {
            valMin=tabVal[j];
            iMin=j;
        }
    }
    j=0;
    valMax=tabVal[j];
    for (j=0;j<NB_RELEVE;j++)
    {
        if(tabVal[j]>valMax)
        {
            valMax=tabVal[j];
            iMax=j;
        }
    }

    for (i=0;i<NB_RELEVE;i++)
    {
        if(i!=iMin && i!=iMax)
        {
            moyenne = moyenne + tabVal[i];
        }
    }
    moyenne = moyenne / (NB_RELEVE-2);

    cout << "la moyenne de vos valeurs est : " << moyenne << endl;
    return 0;
}
