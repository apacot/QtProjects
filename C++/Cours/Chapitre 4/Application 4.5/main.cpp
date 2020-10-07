#include "barre.h"

/**
  @file main.cpp
  @brief main
  @return 0
  @details Programme principal qui fait l'intanciation de chaque classe fille et qui affiche leurs caractéristiques et leur masse
  @author Pacot Antoine
  @date 24/09/2020
 */
int main()
{
    BarreCarree uneBarre("Barre 2x2 en Cuivre",200, 8.920,"BarreCarree",2);
    uneBarre.AfficherCaracteristiques();
    BarreRonde uneBarre2("Barre ronde diamètre 2",200,8.5,"BarreRonde",2);
    uneBarre2.AfficherCaracteristiques();

    return 0;
}
