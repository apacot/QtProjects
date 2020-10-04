#include "horloge.h"

int main()
{
    Horloge uneHorloge;
    TOUCHES_CLAVIER laTouche = AUCUNE;

    do
    {
        laTouche=uneHorloge.Controler(laTouche);
    }while (laTouche != FIN);

    return 0;
}
