#include <stdio.h>

 int main() {

    int diaSemana,i; 

    do{
        
        printf ("Digite um numero, para saber quual dia da semana corresponde a ele (caso deseje encerrar digite 0): ");
        scanf("%d",  &diaSemana);

        printf("------------------------------------------------------------------\n");
        printf("\n");

        if(diaSemana == 1){
            printf("O dia da semana equivalente ao numero %d, e Domingo\n", diaSemana);
        }else if(diaSemana == 2){
            printf("O dia da semana equivalente ao numero %d, e segunda-feira\n", diaSemana);
        }else if(diaSemana == 3){
            printf("O dia da semana equivalente ao numero %d, e terca-feira\n", diaSemana);
        }else if(diaSemana == 4){
            printf("O dia da semana equivalente ao numero %d, e quarta-feira\n", diaSemana);
        }else if(diaSemana == 5){
            printf("O dia da semana equivalente ao numero %d, e quinta-feira\n", diaSemana);
        }else if(diaSemana == 6){
            printf("O dia da semana equivalente ao numero %d, e sexta-feira\n", diaSemana);
        }else if(diaSemana == 7){
            printf("O dia da semana equivalente ao numero %d, e sabado\n", diaSemana);
        }else if(diaSemana > 7 || diaSemana < 0){
            printf("O numero digitado nao corresponde a nenhum dia da semana !!!!\n");
        }

    }while(diaSemana != 0);
    
    return 0;
}