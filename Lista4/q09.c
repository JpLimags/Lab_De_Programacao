#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5

int main(){

    int Vnum[TAM];
    int *pV = NULL, *pB= NULL;
    int aux;

    pV = Vnum;
    printf("Digite um numero: \n");
    for(int i = 0; i < TAM; i++){

        scanf("%d", (pV + i));
    }

    pB = Vnum;
    for(int cont = 1; cont < TAM; cont++){
        for(int j = 0; j<TAM-1; j++){

            if(*(pB + j) >  *((pB + j) + 1)){
                aux = *(pB + j);
                *(pB + j) = *((pB + j) + 1);
                *((pB+j) + 1) = aux;
            }
        }
    }

    printf("Vetor ordenado");

    for(int i = 0; i < TAM; i++){

        printf("%d", *(pV + i));
    }

    return 0;
}