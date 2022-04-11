#include <stdio.h>
#include <math.h>

#define pi 3.14159

int main()
{   
    float raio, diametro, circunferencia,area; 
    
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    printf("O diametro do circulo digitado e de: %.2f\n", raio * 2);
    printf("O valor de sua circuferencia e de: %.2f\n", 2*raio*pi);
    printf("Enquanto sua area e de: %.2f\n", pi * pow(2,raio));
    
    return 0;
}