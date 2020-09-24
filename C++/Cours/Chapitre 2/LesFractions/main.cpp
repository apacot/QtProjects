#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
    Fraction uneFraction(25,15);
    Fraction frac2(12,3);

    cout << "Le numerateur : " << uneFraction.getNumerateur() << endl;
    cout << "Le denominateur : " << uneFraction.getDenominateur() << endl;
    frac2 = uneFraction;
    cout << "Le numerateur : " << frac2.getNumerateur() << endl;
    cout << "le denominateur : " << frac2.getDenominateur() << endl;

    return 0;
}
