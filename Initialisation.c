#include <stdio.h>
#include <stdlib.h>
#include "PrototipeStatic.h"
#include "PrototipeDynamic.h"

void initialisationStruct(Ttab** LeTab)
{
    (*LeTab) = malloc(sizeof(*LeTab));

    if((*LeTab) == NULL)
    {
        exit(EXIT_FAILURE);
    }

    (*LeTab)->colonnes = 0;
    (*LeTab)->lignes = 0;

    (*LeTab)->tableau = NULL;
}

heure* initialisationListe()
{
    heure* Heure = malloc(sizeof(*Heure));
    Liste* Laliste = malloc(sizeof(*Laliste));


    if(Heure == NULL || Laliste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Heure->nombre = 0;
    Heure->suivant = NULL;
    Laliste->premier = Heure;

    return Heure;
}
