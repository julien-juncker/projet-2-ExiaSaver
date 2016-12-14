#include <stdio.h>
#include <stdlib.h>
#include "Prototypes.h"
#include "PrototipeStatic.h"


int EcranStatic(int** Ecran)
{
    Ttab* tab = NULL;

    char* nomFichier = NULL;

    int choix = 1;//rand()%3;
    switch(choix)
    {
        case 0:
            nomFichier = "ex1.pbm";
            break;
        case 1:
            nomFichier = "ex2.pbm";
            break;
        case 2:
            nomFichier = "ex3.pbm";
            break;
    }

    affecter(&tab, nomFichier);

    Affichetableau(&tab, Ecran);

    return 0;
}
