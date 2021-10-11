//
// Created by Clément Masson on 04/10/2021.
//

#include <stdio.h>
#include "exercices.h"
#include "fonctions.h"
#define TAILLE_MAX_TABLEAU 100
#define NBR_LIGNES 3
#define NBR_COLONNES 4

void exercice1()
{
    int choix=0; // On déclare le choix de l'utilisateur
    printf("Choisir la fonction souhaitée : \n"
           "1 : fonctions de saisie d'un nbr rationnel \n"
           "2 : fonctions d'affichage d'un nbr rationnel \n"
           "3 : fonctions de multiplication de 2 nbr rationnels \n"
           "4 : fonctions d'addition de 2 nbr rationnels \n"
           "5 : fonctions pgdc entre numérateur et dénominateur nbr rationnel \n"
           "6 : fonctions simplification fraction nbr rationnel \n");
    scanf("%i", &choix);
    switch (choix)
    {
        case 1:
        {
            saisie();
            break;
        }
        case 2:
        {
            affichage(saisie());

            break;
        }
        case 3:
        {
            nombreRationnel nbrRa1=saisie();
            printf("Le premier nbr rationnel vaut : ");
            affichage(nbrRa1);
            nombreRationnel nbrRa2=saisie();
            printf("Le deuxième nbr rationnel vaut : ");
            affichage(nbrRa2);
            printf("La mutiplication des 2 nbr rationnels vaut : ");
            affichage(multiplication(nbrRa1,nbrRa2));
            break;
        }
        case 4:
        {
            nombreRationnel nbrRa1=saisie();
            printf("Le premier nbr rationnel vaut : ");
            affichage(nbrRa1);
            nombreRationnel nbrRa2=saisie();
            printf("Le deuxième nbr rationnel vaut : ");
            affichage(nbrRa2);
            printf("L'addition des 2 nbr rationnels vaut : ");
            affichage(addition(nbrRa1,nbrRa2));
            break;
        }
        case 5:
        {
            printf("Le pgcd au numérateur et au dénominateur vaut %i", pgdc(saisie()));
            break;
        }
        case 6:
        {
            nombreRationnel n=saisie();
            printf("Le nbr rationnel vaut : ");
            affichage(n);
            printf("la fraction simplifiée vaut : ");
            affichage(simplification(n));
            break;
        }
    }
}

void exercice2()
{
    int tableau[TAILLE_MAX_TABLEAU]={0}; // initialise le tableau avec que des 0 dans chaque cellule
    int tailleLogique = remplirTableau(tableau);
    printf("La valeur la plus grande du tableau vaut %i \n", valeurMaxtableau(tableau,tailleLogique));
    printf("\n fin Exo 2 \n");
}

void exercice3()
{
    int tableau2D[NBR_LIGNES][NBR_COLONNES] = {{0}}; // Initialisation du tableau 2D 3x4
    remplirTableau2D(tableau2D); // Remplissage du tableau 2D 3x4
    int tableau1D[NBR_LIGNES * NBR_COLONNES] = {0}; // Initialisation du tableau 1D
    int i = 0, j = 0;
    for (i = 0; i < NBR_LIGNES; i += 1)
    {
        for (j = 0; j < NBR_COLONNES; j += 1)
        {
            tableau1D[i * NBR_COLONNES + j] = tableau2D[i][j]; // La case de coordonées i,j sera la (i*nbrColonnes+j)ème cases du tableau 1D car il y a nbrColonnes par ligne
        }
    }
    int k = 0;
    printf("Le nouveau tableau est :\n ");
    for (k = 0; k < NBR_COLONNES * NBR_LIGNES; k += 1)
    {
        printf("%i ", tableau1D[k]);
    }
    printf("\n Fin Exo 3 \n");
}