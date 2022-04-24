#include <stdio.h>

int main(){

    int A, B,aux = 0, i;

    printf("Digite o valor inicial do intervalo que deseja trabalhar: ");
    scanf("%d", &A);

    printf("Digite o valor limite do intervalo que deseja trabalhar: ");
    scanf("%d", &B);

    for(i = A; i < B; i++){

        if(i % 3 == 0){
            aux ++;
        }
    }

    for(i = B; i < A; i++){

        if(i % 3 == 0){
            aux ++;
        }
    }


    printf("O quantidade de multiplos de tres no intervalo %d a %d, foi %d", A,B, aux);

    return 0;
}