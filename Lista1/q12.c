#include <stdio.h>

int main()
{   
    //Declaração das variáveis
    int num1,num2,soma,prod,difer,resto;
    float quoc;

    //Input dos dados 
    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    //Operações
    soma = num1 + num2;
    prod = num1 * num2;
    difer =  num1 - num2;
    quoc = num1 / num2;
    resto = num1 % num2;
    
    //Saídas
    printf("O valor da soma entre os numeros digitados foi de: %d\n", soma);
    printf("O valor do produto resultante da multiplicacao dos numeros digitados foi de: %d\n", prod);
    printf("O valor da subtracao entre os valores digitados foi de: %d\n", difer);
    printf("O resultado da divisao foi %.2f\n",quoc);
    printf("O resto da divisao acima foi %d\n", resto);

    return 0;
}