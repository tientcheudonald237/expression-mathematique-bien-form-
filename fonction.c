#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "pile.h"

int is_contraire(char b,char a){
    if(a =='(' && b == ')'){
        return 1;
    }
    else{
        if(a =='[' && b == ']'){
            return 1;
        }
        else{
            if(a =='{' && b == '}'){
                return 1;
            }
            else{
                return 0;
            }
        }
    }
}

int est_bien_forme(char tab[]){
    Pile *p = malloc(sizeof(Pile));
    p = initialise(p);
    int i;
    char ante;
    for(i=0;i<=strlen(tab);i++){
        if( tab[i] == '(' || tab[i] == '[' || tab[i] == '{'){
            empiler(p,tab[i]);
            ante = tete_pile(p);
        }
        if(tab[i] == ')' || tab[i] == ']' || tab[i] == '}'){ 
            if(pile_vide(p)){
                return 0;
            }
            else{
                if(is_contraire(tab[i],ante)){
                    depiler(p);
                    ante = tete_pile(p);
                }
                else{
                    return 0;
                }
            }   
        }
    }
    if(pile_vide(p)){ return 1;}
    else{ return 0;}
}
