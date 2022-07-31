#include <stdio.h>
#include <stdlib.h>

#include "fonction.h"

int main(){
    char chain[50];
    printf("entrer une chaine : ");
    scanf("%s",chain);
    if(est_bien_forme(chain)){
        printf("l'espression est bien formé \n");
    }
    else{
        printf("l'espression n'est pas bien formé\n");
    }
    return 0;
}