#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Ne pas oublier d'inclure le fichier time.h
#include "Prototypes.h"

int main(int argc, char *argv[])
{
    int TypeDeFond =  0; //rand()%3; //renvoi une valeur pseudo-al�atoire (0, 1 ou 2), correspondant au type d'�cran de veille � ex�cuter.
    //printf("%dd \n", TypeDeFond);

    //testASCII(); //permet de tester quel code ASCII est utilis� dans cet ordinateur

    //int NbrLignes = 10, NbrColonnes = 10;

    int **Ecran;
    Ecran = (int**) malloc(80 * sizeof(int*));//largeur
    Ecran = (int**) malloc(24 * sizeof(int*));//hauteur

    switch(TypeDeFond)//Permet d'eff�ctuer l'�cran de veille sl�ctionn�.
    {
    case 0:
        EcranStatic(Ecran);
        break;

    case 1:
        //EcranDynamique(Ecran);
        break;

    case 2:
        printf("le cas 3");
        break;
    }

    free(Ecran);

    quit();
    printf("Le processus ne c'est pas arr�t�"); // v�rfie l'arr�t du processus

    return 0;
}
