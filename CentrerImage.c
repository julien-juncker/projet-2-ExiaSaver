#include <stdio.h>
#include <stdlib.h>
#include "Prototypes.h"
#include "PrototipeStatic.h"

#define longeur 80
#define largeur 24

void PosIniTableauCentre(int* Colonnetab, int* Lignetab)
{
    *Colonnetab = (longeur - *Colonnetab)/2 ;
    *Lignetab = (largeur - *Lignetab)/2 ;

    //printf("%d %d\n \n", Colonnetab, Lignetab);

}


