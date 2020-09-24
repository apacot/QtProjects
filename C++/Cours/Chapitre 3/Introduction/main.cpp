#include <iostream>
#include "carton.h"
#include "caissedebouteilles.h"

using namespace std;

int main()
{
    Carton boite(15,10,10,5);
    CaisseDeBouteilles laCaisse(30,30,20,8,33);

    cout << "Le volume dans les bouteilles est : " << laCaisse.CalculerVolume() << "cl" << endl;
    cout << "Les bouteilles sont dans un contenant de " << static_cast<Contenant>(laCaisse).CalculerVolume() << "cm3" << endl;
}
