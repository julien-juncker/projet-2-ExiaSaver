#include <stdio.h>
#include <stdlib.h>
#include "PrototipeStatic.h"
#include "PrototipeDynamic.h"

void allocation(Ttab** LeTab, int taille1, int taille2)
{

    if((*LeTab) == NULL)
    {
        exit(EXIT_FAILURE);
    }

    (*LeTab)->colonnes = taille1;
    (*LeTab)->lignes = taille2;

    (*LeTab)->tableau = malloc(taille1*sizeof(int)); //on alloue la premiere dimension

    if((*LeTab)->tableau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    for(int k=0; k<taille1; k++)
    {
        (*LeTab)->tableau[k] = malloc(taille2*sizeof(int)); //on alloue la second dimension du tableau
        if((*LeTab)->tableau[k] == NULL)
        {
            for(k = k-1; k >=0; k--)//on parcourt la boucle dans l'ordre inverse
            {
                 free((*LeTab)->tableau[k]);   //Lib�ration de la deuxi�me dimension
            }

            free((*LeTab)->tableau);   //Lib�ration de la premi�re dimension

            (*LeTab)->tableau = NULL; //Par mesure de securit�

            exit(EXIT_FAILURE);
        }
    }
}



