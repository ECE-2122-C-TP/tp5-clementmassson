//
// Created by Clément Masson on 04/10/2021.
//

#include <stdio.h>
#include "fonctions.h"
#define TAILLE_MAX_TABLEAU 100
#define NBR_LIGNES 3
#define NBR_COLONNES 4

// EXO 1

nombreRationnel saisie()
{
    nombreRationnel n;  // On définit le nombre "n" de type struct "nombreRationnel"
    printf("Saisir le numérateur et le dénominateur du nombre rationnel :");
    scanf("%i %i", &n.num, &n.denom); //  On affecte le numérateur et le dénominateur à "n"
    return n;
}


void affichage(nombreRationnel n)
{
    float valeur=(float)n.num/(float)n.denom;
    printf("%i/%i = %f \n", n.num, n.denom, valeur);  //  On print le numérateur / le dénominateur de notre variable "n" de type struct"nombreRationnel et sa veleur de type float
}


nombreRationnel multiplication(nombreRationnel a,nombreRationnel b)
{
    int nouveauNum=0, nouveauDenom=0; // On déclare le numérateur et le dénominateur du rationnel obtenu apres multiplication
    nouveauNum=a.num*b.num; // On définie le numérateur obtenu avec la formule
    nouveauDenom=a.denom*b.denom; //  On définie le dénominateur obtenu avec la formule
    nombreRationnel nouveauNombre = {nouveauNum, nouveauDenom}; // On définie le rationnel obtenu apres multiplication
    return nouveauNombre;
}


nombreRationnel addition(nombreRationnel a,nombreRationnel b)
{
    int nouveauNum=0, nouveauDenom=0; // On déclare le numérateur et le dénominateur du rationnel obtenu apres addition
    nouveauNum=a.num*b.denom + b.num*a.denom; // On définie le numérateur obtenu avec la formule
    nouveauDenom=a.denom*b.denom; //  On définie le dénominateur obtenu avec la formule
    nombreRationnel nouveauNombre = {nouveauNum, nouveauDenom}; // On définie le rationnel obtenu apres addition
    return nouveauNombre;
}


int pgdc(nombreRationnel n)
{
    while (n.num != n.denom)
    {
        if (n.num < n.denom)
        {                                  // algorithme d'euclide vu en Prépa (= méthode simple et rapide)
            n.denom = n.denom - n.num;
        }
        else
        {
            n.num = n.num - n.denom;
        }
    }
    return n.num;
}
        /*
        if (n.num == 1)
        {
            return 0;            // Optionnel : retourner 0 si il n'y a pas de pgdc
        }                        // (pas obliger de le faire car dans tous les cas le pgdc vaudra au minimum 1)
        else
        {
            return n.num;
        }
        */

nombreRationnel simplification(nombreRationnel n)
{
    nombreRationnel nbrRaSimplifié = {n.num / pgdc(n), n.denom / pgdc(n) };  // On définit le nombre rationnel simplifié comme étant le numérateur divisé par le pgdc sur le dénominateur divisé par le pgdc
    return nbrRaSimplifié;
}

    /*
    if (pgdc(n) == 0)
    {
        return n;
    }                               // algorithme si la fonction pgdc retourne 0 quand il n'y a pas de pgdc
    else
    {
        n.num=n.num/pgdc(n);
        n.denom=n.denom/pgdc(n);
        return n;
    }
    */

// EXO 2

int remplirTableau(int tableau[])
{
    int tailleSouhaité = 0;
    printf("Saisir le nombre d'entiers que vous voulez rentrer dans le tableau (il ne doit pas dépasser %i)", TAILLE_MAX_TABLEAU);
    scanf("%i", &tailleSouhaité);
    while (tailleSouhaité > TAILLE_MAX_TABLEAU)
    {
        printf("ERREUR : la valeur rentrée est superieure à %i \n", TAILLE_MAX_TABLEAU);
        printf("Saisir le nombre d'entiers que vous voulez rentrer dans le tableau (il ne doit pas dépasser %i)", TAILLE_MAX_TABLEAU);
        scanf("%i", &tailleSouhaité);
    }
    printf("Saisir les valeurs du tableau : \n");
    int i=0;
    for ( i=0; i<tailleSouhaité; i+=1)
    {
        scanf("%i", &tableau[i]);
    }
    return tailleSouhaité; // retourne la taille logique du tableau
}

int valeurMaxtableau(tableau[],tailleLogique)
{
    int valeurMax=tableau[0];
    int i=0;
    for ( i=1; i<tailleLogique; i+=1)
    {
        if (tableau[i]>valeurMax)
        {
            valeurMax=tableau[i];
        }
    }
    return valeurMax;
}

// EXO 3

void remplirTableau2D(int tableau[NBR_LIGNES][NBR_COLONNES])
{
    int i = 0, j = 0;
    for (i = 0; i < NBR_LIGNES; i += 1)
    {
        printf("Saisir les entiers de la ligne %i :", i+1);
        for (j = 0; j < NBR_COLONNES; j += 1)
        {
            scanf("%i", &tableau[i][j]);
        }
    }
}