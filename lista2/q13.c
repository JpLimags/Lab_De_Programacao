#include <stdio.h>

int main(){

    int A, B, soma = 0,aux, i;

    printf("Digite o valor inicial do intervalo que deseja trabalhar: ");
    scanf("%d", &A);

    printf("Digite o valor limite do intervalo que deseja trabalhar: ");
    scanf("%d", &B);

    for(i = A; i < B; i++){

        if(i % 2 == 0){
            soma += i;
        }
    }

    for(i = B; i < A; i++){

        if(i % 2 == 0){
            soma += i;
        }
    }


    printf("O resultado do somatorio de todos os numeros pares no intervalo %d a %d, foi %d", A,B, soma);

    return 0;
}