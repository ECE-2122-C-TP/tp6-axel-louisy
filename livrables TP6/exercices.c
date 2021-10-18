//
// Created by pc on 29/09/2021.
//

#include "exercices.h"
#include "stdio.h"
#include "mesStructures.h"
#include "fonctions.h"

int exercice1(){
    int a;
    float b;
    printf ("Saisissez votre entier et votre réel");
    scanf("%d%f", &a, &b );
    init(&a,&b);
    return 0;
}


int exercice3(){
    int a = 5;
    int b = 14;
    printf("a vaut %d, b vaut %d", a,b);
    changementDeValeur(&a, &b);
    printf("a vaut maintenant %d, b vaut maintenant %d", a,b);
    return 0;
}

int exercice4(){
    int tailleTableau = 0, somme = 0, produit = 1, i = 0, x = 0;
    int tableau[];
    printf("Saisissez le nombre d'entiers que vous voulez dans votre tableau \n");
    scanf("%d", &tailleTableau);
    while (i<=tailleTableau){
        printf("Saisissez l'entier suivant");
        scanf("%d", &x );
        tableau[i] = x;
        i++;
    }
    produitSommeTableau(tableau[],tailleTableau);
    printf("La somme est %d et le produit est %d", somme, produit );
    return 0;
}







