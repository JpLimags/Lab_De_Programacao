#include <stdio.h>

int main(){

    int A =0, B =200, soma3 = 0, soma5 = 0,i;


    for(i = A; i < B; i++){

        if(i < 100 && i % 3 == 0){
            soma3 += i;
        }else if(i > 100 && i % 5 == 0){
            soma5 += i;
        }
    }

    printf("O somatorio dos multiplos de 3 no intervalo de 0 a 100, foi %d\n",soma3);
    printf("O somatorio dos multiplos de 5 no intervalo de 0 a 100, foi %d\n",soma5);
    return 0;
}