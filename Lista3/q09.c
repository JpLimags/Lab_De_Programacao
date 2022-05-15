#include <stdio.h>

#define TAM 3

int main(){

    int matriz[TAM][TAM];

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("Digite a posicao da matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    puts("A matriz gerada foi: ");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }


    puts("E sua diagonal principal foi: ");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){

            if(matriz[i] == matriz[j]){
                printf("%d ,", matriz[i][j]);
            }
        }
    }



    return 0;
}