#include <iostream>
using namespace std;

#define N 5

int main()
{
    int tab[N]= {5, 7, 2, 1, 4};
    int valMin;
    int iMin;
    int i;
    int j;

    for(i=0; i<N-2; i++)
    {
        //recherche de la valeur min
        valMin = tab[i];
        for(j=0;j<N;j++)
        {
            if(tab[j]<valMin)
            {
                valMin = tab[j];
                iMin=j;
            }
        }
        //permutation de la valeur min
            tab[iMin] = tab[i];
            tab[i] = valMin;
    }

}
