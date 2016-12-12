#include <stdio.h>
#include <stdlib.h>

int PosIniTableauCentre(int Colonnetab, int Lignetab)
{
    int longueurEcran = 80, largeurEcran = 24;

    Colonnetab = (longueurEcran - Colonnetab)/2 ;
    Lignetab = (largeurEcran - Lignetab)/2 ;

    return Colonnetab;
    return Lignetab;
}
