#include <stdio.h>

int main(){

    int A, B,i,quad = 0;

    printf("Digite o valor inicial do intervalo que deseja trabalhar: ");
    scanf("%d", &A);

    printf("Digite o valor limite do intervalo que deseja trabalhar: ");
    scanf("%d", &B);

    printf("Abaixo veremos o quadrado dos multiplos de 4, no intervalo %d a %d\n", A,B);
    printf("--------------------------------------------------------------------\n");

    for(i = A; i < B; i++){

        if(i % 4 == 0){

            quad = i * i;
            printf("O quadrado do numero %d, e: %d\n", i,quad);
        }
    }

    for(i = B; i < A; i++){

        if(i % 4 == 0){

            quad = i * i;
            printf("O quadrado do numero %d, e: %d\n", i,quad);
        }
    }
    return 0;
}