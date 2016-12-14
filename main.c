#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Ne pas oublier d'inclure le fichier time.h
#include "Prototypes.h"

int main(int argc, char *argv[])
{
    int TypeDeFond =  0; //rand()%3; //renvoi une valeur pseudo-aléatoire (0, 1 ou 2), correspondant au type d'écran de veille à exécuter.
    //printf("%dd \n", TypeDeFond);

    //testASCII(); //permet de tester quel code ASCII est utilisé dans cet ordinateur

    //int NbrLignes = 10, NbrColonnes = 10;

    int **Ecran;
    Ecran = (int**) malloc(80 * sizeof(int*));//largeur
    Ecran = (int**) malloc(24 * sizeof(int*));//hauteur

    switch(TypeDeFond)//Permet d'efféctuer l'écran de veille sléctionné.
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
    printf("Le processus ne c'est pas arrêté"); // vérfie l'arrêt du processus

    return 0;
}
