#include <stdio.h>

int main()
{
    //Declaração das variáveis
    float num1; 
    
    //Entrada dos dados
    printf("Digite um valor decimal: ");
    scanf("%f", &num1);
    
    //Saída dos dados
    printf("O número digitado acima foi: %.1f",num1);
    
    return 0;
}