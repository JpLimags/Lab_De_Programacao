#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1 = 10, num2 = 5, *pn1 = NULL, *pn2 = NULL, a;

    pn1 = &num2;
    pn2 = &num1;

    printf("O valor da variavel num1 agora e: %d\nE de num2 e: %d", *pn1, *pn2);
    return 0;
}