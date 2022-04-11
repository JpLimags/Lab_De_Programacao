#include <stdio.h>

int main(){
    int num1, Qdr;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num1);

    Qdr = num1 * num1;
    printf("O quadrado do numero digitado e: %d", Qdr);

    return 0;
}