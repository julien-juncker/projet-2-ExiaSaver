#include <stdlib.h>	//Pour les constantes EXIT_SUCCESS et EXIT_FAILURE
#include <stdio.h>	//Pour fprintf()
#include <sys/ioctl.h>
#include <time.h> 	//Ne pas oublier d'inclure le fichier time.h
#include "Prototypes.h"
#include"log.h"


int main(int argc, char *argv[])
{

	int TypeDeFond;
    if(argc!=0 && *argv[1]=='-stat')
    {
        printf("stat");
    }

    else
    {



	 return 0;

        TypeDeFond =  0; //rand()%3; //renvoi une valeur pseudo-aléatoire (0, 1 ou 2), correspondant au type d'écran de veille à exécuter.

        //testASCII(); //permet de tester quel code ASCII est utilisé dans cet ordinateur

        switch(TypeDeFond)//Permet d'efféctuer l'écran de veille sléctionné.
        {
        case 0:
            system("./static");
            break;

        case 1:
            //EcranDynamique(Ecran);
            break;

        case 2:
            printf("le cas 3");
            break;
        }
    }
   	struct winsize w;
	ioctl(0, TIOCGWINSZ, &w);


	if (TypeDeFond==0)
	{
		log1(TypeDeFond);
	}
	else
	{
		log2(TypeDeFond, w.ws_row, w.ws_col);
	}


    quit();
    printf("Le processus ne c'est pas arrêté"); // vérfie l'arrêt du processus

    return 0;
}
