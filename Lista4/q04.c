#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(){

    int Vnums[TAM], *pr = NULL;

    for(int i = 0; i<TAM; i++){

        printf("Digite um numero: ");
        scanf("%d", &Vnums[i]);
    }

    pr = Vnums;
    for(int j = 0; j < TAM; j++){

        printf("Endereco: [%p] do numero: %d \n", pr+j, *(pr + j));
    }

    return 0;
}