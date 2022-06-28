#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct estoque{

    char nomePeca[256];
    int numPedido;
    int numPeca;
    float PrecoPeca;
};


int main(){

    struct estoque e;


    printf("Digite o nome da peca: ");
    scanf("%s", &e.nomePeca);

    printf("Digite o numero da peca: ");
    scanf("%d", &e.numPeca);

    printf("Digite o preco da peca ");
    scanf("%f", &e.PrecoPeca);

    printf("Digite o codigo da peca ");
    scanf("%d", &e.numPedido);


}