#include <stdio.h>
#include <math.h>

int main()
{
    //Entrada dos dados 
    float x;
    
    printf("Digite um valor inteiro qualquer: ");
    scanf("%f", &x);
    
    printf("O quadrado do valor digitado e %.2f",pow(x,2));

    printf("O triplo do valor digitado e: %.2f", 3*x);

    printf("O meio do número digitado e: %.2f", x/2);
    
    return 0;
}