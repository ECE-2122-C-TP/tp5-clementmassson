#include <stdio.h>
#include "exercices.h"
#include "fonctions.h"

int main()
{
    int choix = 0; // On déclare le choix de l'utilisateur
    do
    {
        printf("\n Choisir l'exercice souhaité ou rentrer 0 pour arrêter le programme : \n"  // On demande à l'utilisateur de choisir l'exercice
               "1 : Exo 1 \n"
               "2 : Exo 2 \n"
               "3 : Exo 3 \n");
        scanf("%i", &choix);
        switch (choix)
        {
            case 1:
            {
                exercice1();
                break;
            }
            case 2:
            {
                exercice2();
                break;
            }
            case 3:
            {
                exercice3();
                break;
            }
            default :
            {
                printf("Choix Invalide ! Veuillez selectionner un exercice :\n");
                break;
            }
        }
    }
    while (choix != 0); //Si choix == 0 on arrête !
    {
        printf("Au revoir !\n");
    }
return 0;
}