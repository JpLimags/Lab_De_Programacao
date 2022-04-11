#include <stdio.h>

int main(){

    //Declaração das variáveis
    int hora, minuto, Hs, Ms;

    //Entrada de dados
    printf("Digite uma certa quantidade de horas: ");
    scanf("%d", &hora);
    Hs = hora * 60 * 60;

    printf("Digite uma certa quantidade de segundos: ");
    scanf("%d", &minuto);
    Ms = minuto * 60;

    //Saídas
    printf("A quantidade de horas digitada, e representada em segundos por: %d",Hs);
    
    printf("A quantidade de minutos digitada, e representada em segundos por: %d",Ms);
    
    return 0;
}