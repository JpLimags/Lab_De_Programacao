#include <stdio.h>

int main()
{   
    //Declaração das variáveis
    float vlrHoraAula, salario;
    int Htrabalhadas;

    //Entrada de dados
    printf("Digite o valor da aula do professor: ");
    scanf("%f", &vlrHoraAula);

    printf("Digite a quantidade de horas trabalhadas durante o mes: ");
    scanf("%d", &Htrabalhadas);

    //Calculo do valor bruto do salário 
    salario = vlrHoraAula * Htrabalhadas;
    
    //Condicionais referentes aos descontos
    if(salario <= 1212){
        printf("O salario bruto foi de: R$%.2f", salario);
        printf("O salario liquido com o desconto do INSS foi de: R$%.2f", salario - (salario * 9/100));

    }else if(salario >= 1212.01 && salario <= 2427.35){

        printf("O salario bruto foi de: R$%.2f", salario);
        printf("O salario liquido com o desconto do INSS foi de: R$%.2f", salario - (salario * 12/100));
    }else{

        printf("O salario bruto foi de: R$%.2f", salario);
        printf("O salario liquido com o desconto do INSS foi de: R$%.2f", salario - (salario * 14/100));
    }

    return 0;
}