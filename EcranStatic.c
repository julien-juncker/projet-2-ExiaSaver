#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include "PrototipeStatic.h"


int main()
{
    Ttab* tab = NULL;

    char* nomFichier = NULL;
    int choix = rand()%3;

    switch(choix)
    {
        case 0:
            nomFichier = "EXIASAVER1_PBM/ex1.pbm";
            break;
        case 1:
            nomFichier = "EXIASAVER1_PBM/ex2.pbm";
            break;
        case 2:
            nomFichier = "EXIASAVER1_PBM/ex3.pbm";
            break;
    }
    affecter(&tab, nomFichier);

    Affichetableau(&tab);
    return 0;
}
