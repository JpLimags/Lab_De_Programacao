#include <stdio.h>

int main()
{
    //Declaração das variáveis
    int num;
    
    //Entrada de dados
    printf("Digite um número: \n");
    scanf("%d", &num);
    
    //Saída
    printf("\tO número digitado em a base hexadecimal é representado da seguinte forma: %X \n", num);
    printf("\tO número digitado em base octogonal é representado da seguinte forma: %o", num);
    
    return 0;
}
