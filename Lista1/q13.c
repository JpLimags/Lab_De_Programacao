#include <stdio.h>

int main()
{   
    //Declaração das variáveis
    int a,b;

    //Inputs
    printf("Digite um numero para variavel a : ");
    scanf("%d", &a);

    printf("Digite um segundo numero, mas agora para variável b: ");
    scanf("%d", &b);

    //Operações 
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    //Saídas
    printf("O valor de a agora e de: %d\n", a);
    printf("Enquanto que o de b e de : %d\n", b);

    return 0;
}