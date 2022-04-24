#include <stdio.h>

int main(){

    int num, F, i;

    printf("Digite o numero que deseja saber o fatorial: ");
    scanf("%d", &num);
    i = num;

    for(F = 1; num>1; num = num - 1){

        F = F*num;
    }
    printf(" O fatorial do numero %d, e: %d", i, F);

    return 0;
}