#include <stdio.h>
#include <stdlib.h>
#include "PrototipeStatic.h"

#define longeur 80
#define largeur 24

// Affiche la matrice passée en paramètre
void Affichetableau(Ttab** tab, int **Ecran)
{

    int nbrColonnes = (*tab)->colonnes;
    int nbrLignes = (*tab)->lignes;

    int debutX = nbrColonnes;
    int debutY = nbrLignes;

    int valeur, a, b;

    PosIniTableauCentre(&debutX, &debutY);    //position initial du tableau en X et Y

    //permet de verifier les valeurs obtenues
    //printf("\n x = %ld, y = %ld, nbrLigne= %d, nbrColonnes = %d  \n", debutX, debutY, nbrLignes, nbrColonnes);


    for(int j=0; j<(largeur); j++)
    {
        for(int i=0; i<(longeur); i++)
        {
            valeur = 0;

            //printf("a=%d et b=%d ", i, j);

            if(debutX<=i && i<(nbrColonnes+debutX))
            {
                if(debutY<=j && j<(nbrLignes+debutY))
                {
                    a = i-debutX;
                    b = j-debutY;
                    valeur = (*tab)->tableau[a][b];
                    //printf("tab =%d, a=%d, b=%d", (*tab)->tableau[a][b], a, b);
                    //printf("a");
                    //printf("a=%d et b=%d ", a, b);


                    //printf("%d", valeur);
                    //valeur = 220;
                }
            }
            printf("%c ", valeur);
        }
        printf("\n");
    }
    printf("\n");
}
