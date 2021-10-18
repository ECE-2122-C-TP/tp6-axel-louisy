//
// Created by pc on 29/09/2021.
//
#include "stdio.h"
#include "fonctions.h"
#include "mesStructures.h"

int saisirEntier (){
    int nombre1 = 0;
    printf("Saisir l'entier'");
    scanf("%d , &nombre1");

    return nombre1;
}


}

void init (int* pA, float* pB){
    *pA = 0;
    *pB = 0;
}

void quotientEtReste(int* pA,int* pB,int* pQuotient, int* pReste){
    *pQuotient = *pA / *pB;
    *pReste = *pA % *pB;
}

int quotientPuisReste (int* pA,int* pB,int* pQuotient){
    *pQuotient = *pA / *pB;
    return *pReste = *pA % *pB;
}

void changementDeValeur (int* pA,int*pB){
    int temp = *pA;
    *pA = *pB;
    *pB = temp;
}
void produitSommeTableau (int tableau[], int taille){
    int somme = 0;
    int produit = 1;
    int i = 0;
while (i<=taille){
    somme = somme + tableau[i];
    produit = produit * tableau[i];
    i+=1}

}
