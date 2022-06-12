#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma(int, int, char , char *);

int main(int argc, char *argv[]){

    int num1=0, num2=0;
    char op, str[80]; 
    int resultado;

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    op = *argv[3];

    resultado = soma(num1, num2, op, str);
    printf("O resultado da %s foi %d\n", str, resultado);
    

    return 0; 
}

int soma(int num1, int num2, char op, char *s){

    int res;

    switch(op){
        case '+':
            res = num1 + num2;
            strcpy(s,"soma");
            break;
        case '*':
            res = num1 * num2;
            strcpy(s,"multiplicacao");
            break;
        default: 
            printf("A operação é invalida !");
    }
    return res;
}