#include <stdio.h>
#include <stdlib.h>
#include "Prototypes.h"
#include "PrototipeStatic.h"

int main()
{
    int TypeDeFond =  rand() %3; //renvoi une valeur pseudo-al�atoire (1, 2 ou 3), correspondant au type d'�cran de veille � ex�cuter.
    //printf("%dd \n", TypeDeFond);

    //testASCII(); //permet de tester quel code ASCII est utilis� dans cet ordinateur


    int NbrLignes = 2, NbrColonnes = 2;
    char Ecran[NbrLignes][NbrColonnes];

    switch(TypeDeFond)//Permet d'eff�ctuer l'�cran de veille sl�ctionn�.
    {
    case 0:

        break;

    case 1:

        break;

    case 2:

        break;
    }


    quit();
    printf("Le processus ne c'est pas arr�t�"); // v�rfie l'arr�t du processus

    return 0;
}
