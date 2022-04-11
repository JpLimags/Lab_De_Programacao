#include <stdio.h>

int main()
{
    float cotaAT,ValueR,conv;

    printf("Digite a cotacaoo atual do dolar:\n$");
    scanf("%f", &cotaAT);

    printf("Digite o valor em real que deseja converter:\nR$");
    scanf("%f", &ValueR);

    conv = ValueR / cotaAT;
    printf("O valor convertido foi de $%.2f dolares", conv);
    
    return 0;
}