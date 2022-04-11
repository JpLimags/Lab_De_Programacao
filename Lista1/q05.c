#include <stdio.h>

int main(){

    float conta;

    printf("Digite o valor da sua conta: ");
    scanf("%f", &conta);

    printf("O valor final foi de: %.2f", conta + (conta * 10/100));

    return 0;
}