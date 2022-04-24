#include <stdio.h>

int main(){

    int num, cont, i; 

    printf("Digite a tabuada que deseja saber: ");
    scanf("%d", &num);

    printf("Abaixo sera apresentada a tabuada do %d: \n",num);

    for(i = 0; i <= 10; i++){

        printf("%d X %d = %d\n", num, i, num * i);        
    }
}