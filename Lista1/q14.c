#include <stdio.h>

int main()
{   
    //variaveis
    float tempC, Fconv;

    printf("Digite uma temperatura em graus Ceusius: ");
    scanf("%f", &tempC);

    //conversão das temperaturas
    Fconv = (9 * tempC + 160) / 5;

    //saida
    printf("A temperatura digitada convertida em Fahrenheit foi de: %.2f", Fconv);
    return 0;
}