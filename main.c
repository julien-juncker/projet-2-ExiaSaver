#include <stdio.h>
#include <stdlib.h>
#include "Prototypes.h"
#include "PrototipeStatic.h"

int main()
{
    int TypeDeFond =  rand() %3; //renvoi une valeur pseudo-aléatoire (1, 2 ou 3), correspondant au type d'écran de veille à exécuter.
    //printf("%dd \n", TypeDeFond);

    //testASCII(); //permet de tester quel code ASCII est utilisé dans cet ordinateur


    int NbrLignes = 2, NbrColonnes = 2;
    char Ecran[NbrLignes][NbrColonnes];

    switch(TypeDeFond)//Permet d'efféctuer l'écran de veille sléctionné.
    {
    case 0:

        break;

    case 1:

        break;

    case 2:

        break;
    }


    quit();
    printf("Le processus ne c'est pas arrêté"); // vérfie l'arrêt du processus

    return 0;
}
