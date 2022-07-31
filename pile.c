#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include "pile.h"
#define n 50

Pile* initialise(Pile *pile){
    pile->tete= 0;
    return pile;
}

int pile_pleine(Pile *pile){ 
    if(pile->tete == n){
        return 1;
    }
    return 0;
}

Pile* empiler(Pile *pile, char a){
    if(pile_pleine(pile) == 0){
        pile->tete = pile->tete + 1;
        pile->tab[pile->tete] = a;
    }else{
        printf("la pile est pleine on peut plus empiler !!\n");
    }
    return pile;
}

int pile_vide(Pile *pile){
    if(pile->tete == 0){
        return 1;
    }
    return 0;
}

void depiler(Pile *pile){
    char a;
    if(pile_vide(pile)==0){
        a=pile->tab[pile->tete];
        pile->tete=pile->tete-1; 
    }
}

void afficherPile(Pile *pile){
    int i;
	printf("\nla pile est : ");
	for(i=1;i<=pile->tete;i++){
        if(i==1){
            printf("['%c']<--",pile->tab[1]);
        }else{
            printf("['%c']<--",pile->tab[i]);
        }
	}
	printf("[vide]\n");
}

char tete_pile(Pile *pile){
    return pile->tab[pile->tete];
}