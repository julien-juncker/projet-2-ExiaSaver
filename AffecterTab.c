#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "PrototipeStatic.h"

#define TAILLE_MAX 1000

void affecter(Ttab** tab, char* nomDuFichier)
{
    FILE* fichier = NULL;

    char chaine[TAILLE_MAX] = "";
    char chaineAnex[TAILLE_MAX] = "";
    char chaineAnexCoordonnee[TAILLE_MAX] = "";
    const char t='#';//Constantes permettant le filtrage des caractère du pbm
    const char m='P';//Constantes permettant le filtrage des caractère du pbm

    int ent;    //valeur sortie du pbm et ajouté au tableau
    int i=0, j=0, l=0, c=0, repetition =0;

    const char s[100] = " ";//Pour mettre le nombre d'espaces
    char *token; //chaine temporaire pour diviser

    fichier = fopen(nomDuFichier, "r");

    initialisationStruct(tab);

    if (fichier != NULL)
    {
        while (fgets(chaine, TAILLE_MAX, fichier) != NULL) // On lit le fichier jusqu'a la fin (NULL)
        {
            if (strlen(chaine)>=3 && strlen(chaine)<=6)
            {
                strcpy(chaineAnexCoordonnee,chaine);
                token = strtok (chaineAnexCoordonnee,s);

                while( token != NULL )
                {
                    token = strtok(NULL,s);

                    if (l==0)
                    {
                        l = atoi(token);
                    }
                    else
                    {
                        c = atoi(chaineAnexCoordonnee);
                    }
                }

                chaine[0] = '\0';
            }
            if(repetition == 0 && l!=0 && c!= 0)
            {
                allocation(tab, c ,l);
                //printf("\n%d %d \n",l,c); //permet d'afficher les lignes et colonnes récupérée
                repetition +=1;
            }

            if (!strchr(chaine, m))
            {
                strcpy(chaineAnex,chaine);

                if (!strchr(chaine, t))
                {
                    strcpy(chaineAnex,chaine);
                    token = strtok(chaineAnex, s);

                    while( token != NULL )
                    {
                        (*tab)->colonnes = c;
                        (*tab)->lignes = l;

                        ent = atoi(token);
                        token = strtok(NULL, s);

                        switch(ent)
                        {
                            case 1:
                                ent = 219;
                                break;
                            case 0:
                                ent = 0;
                                break;
                        }


                        //printf("\n ent = %d  ", ent);
                        //printf("le tableau: x=%d y=%d \n", i, j);

                        (*tab)->tableau[i][j] = ent;

                        //printf("%c", (*tab)->tableau[i][j]); //Permet de tester la récupération ds caractères dans le tableauprintf("%c", (*tab)->tableau[i][j]);


                        if(j<=l-1)
                        {
                            if(i==c-1)
                            {
                                //printf("<-i=%d et j=%d", i, j);
                                j++;
                                i=0;

                            }
                            else
                            {
                                //printf("<-i=%d et j=%d", i, j);
                                i++;
                            }
                        }
                    }
                }
            }
        }

        /*
        for(int k=0; k<c; k++)
        {
            for(int m=0; m<=l; m++)
            {
                printf("%c", (*tab)->tableau[m][k]); //Permet de tester la récupération ds caractères dans le tableauprintf("%c", (*tab)->tableau[i][j]);
            }
            printf("\n");
        }
        */
        fclose(fichier);
    }

    else
    {
        // On affiche un message d'erreur si on veut
        printf("\n Impossible d'ouvrir le fichier test.txt\n");
    }
}


