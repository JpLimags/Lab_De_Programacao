#include <stdio.h>

int main(){

    int A=15, B=90,i,quad = 0;

    for(i = A; i < B; i++){

        if(i % 4 == 0){

            quad = i * i;
            printf("O quadrado do numero %d, e: %d\n", i,quad);
        }
    }
    return 0;
}