//
// Created by Clément Masson on 06/10/2021.
//

#ifndef TP5_MASSON_STRUCTURES_TABLEAUX_H
#define TP5_MASSON_STRUCTURES_TABLEAUX_H
#define TAILLE_MAX_TABLEAU 100
#define NBR_LIGNES 3
#define NBR_COLONNES 4

// EXO 1

typedef struct nombreRationnel
{int num,denom;} nombreRationnel;

// EXO 2

int tableau[TAILLE_MAX_TABLEAU]; // taille physique du tableau : 100 cellules de nombres entiers

// EXO 3

int tableau2D[NBR_LIGNES][NBR_COLONNES]; // taille physique du tableau : 3 lignes et 4 colonnes de nombres entiers


#endif //TP5_MASSON_STRUCTURES_TABLEAUX_H