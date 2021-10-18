//
// Created by pc on 18/10/2021.
//

#include "mainTP6.h"
#include "fonctions.h"
#include "exercices.h"

int main(){
    printf("====\tTP6 : MEMOIRES,ADRESSES\t====\n");
    int choixExercice = 0;
    printf("Quel exercice voulez-vous lancer ?\n");
    //exercice 1
    //exercice 3
    //exercice 4

    do{
        scanf("%d", &choixExercice);
        switch (choixExercice){
            case 1 :
                exercice1();
                break;
            case 3 :
                exercice3();
                break;
            case 4 :
                exercice4();
                break;
            case 0 :
                break;
            default: {
                printf("Choix invalide")
                break;
            }
        }
    }while(choixExercice !=0)
return 0;
}