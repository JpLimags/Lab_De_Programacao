#include <stdio.h>

int main(){

    int A, B,i;
    float Media, soma=0, cont = 0;

    printf("Digite o valor inicial do intervalo que deseja trabalhar: ");
    scanf("%d", &A);

    printf("Digite o valor limite do intervalo que deseja trabalhar: ");
    scanf("%d", &B);

    for(i = A; i <= B; i++){

            soma = soma + i;
            cont += 1;
    }

    Media = soma /cont;
    printf("A Media aritmetica dos valores no intervalo %d a %d, foi : %.2f",A,B, Media);

    return 0;
}