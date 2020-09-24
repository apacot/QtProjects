#include <iostream> //pour cin et out

using namespace std; //évite d'écrire std::... à chaque fois

int main()
{
    float temperature;
    float humidite;
    int pression;

    cout <<"Saisir la température, l'humidité et la pression : " << endl;
    cin >> temperature >> humidite >> pression ;

    cout <<"la température est : " << temperature << " °C" << endl;
    cout <<"l'humidité est : " << humidite << " %" << endl;
    cout <<"la pression est : " << pression << " hpa" << endl;

    return 0;
}
