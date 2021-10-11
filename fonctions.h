//
// Created by Clément Masson on 04/10/2021.
//

#ifndef TP5_MASSON_FONCTIONS_H
#define TP5_MASSON_FONCTIONS_H
#include "structures&tableaux.h"


// EXO 1

nombreRationnel saisie();

void affichage(nombreRationnel n);

nombreRationnel multiplication(nombreRationnel a,nombreRationnel b);

nombreRationnel addition(nombreRationnel a,nombreRationnel b);

int pgdc(nombreRationnel n);

nombreRationnel simplification(nombreRationnel n);

// EXO 2

int remplirTableau(int tableau[]);

int valeurMaxtableau(int tableau[],tailleLogique);

// EXO 3

void remplirTableau2D(int tableau[NBR_LIGNES][NBR_COLONNES]);


#endif //TP5_MASSON_FONCTIONS_H
