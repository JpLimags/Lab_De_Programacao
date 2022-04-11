#include <stdio.h>

int main(){

    //Declaração das variáveis
    int comprimento, largura, altura, volume;

    //Entrada de dados
    printf("Digite o valor do comprimento da caixa: ");
    scanf("%d", &comprimento);

    printf("Digite o valor da altura da caixa: ");
    scanf("%d", &altura);

    printf("Digite o valor da largura da caixa: ");
    scanf("%d", &largura);

    //Calculo do volume
    volume = comprimento * largura * altura;

    //Saída
    printf("O volume da caixa digitada e de %.2d cm quadrados");

    return 0;
}