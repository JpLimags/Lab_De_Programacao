#include <stdio.h>
#include <math.h>

int main(){

    int i;

    printf("Abaixo veremos as potencias de base 3, e expoente variando de 0 a 7\n");
    for(i = 0; i <= 7; i++){

        printf("3^%d = %.00f\n",i, pow(3, i));
    }
    return 0;
}