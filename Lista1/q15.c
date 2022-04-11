#include <stdio.h>

int main()
{   
    int diasTrab;
    float valorDia = 50.25;
    float salario, SalarioF;
    
    //Entrada de dados
    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &diasTrab);

    // Condicionais
    if (diasTrab <= 10){
        salario = valorDia * diasTrab;

    }else if(diasTrab > 10 && diasTrab <= 20){
        
        salario = valorDia * diasTrab;
        SalarioF = salario + (salario * 20/100);
        printf("Seu salario foi de: R$%.2f", (SalarioF - (SalarioF*10/100)));
    }else if(diasTrab > 20){

        salario = valorDia * diasTrab;
        SalarioF = salario + (salario * 20/100);
        printf("Seu salario foi de: R$%.2f", (SalarioF - (SalarioF*10/100)));
    }
    return 0;
}