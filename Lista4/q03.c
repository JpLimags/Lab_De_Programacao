#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, menor = 0, *pmenor = NULL;

    while(num != 0){

        puts("Digite um numero(se quiser encerra digite 0): ");
        scanf("%d", &num);

        if(menor == 0){

            pmenor = &num;
            menor = *pmenor;
        }else if(num < menor && num != 0){
            
            pmenor = &num;
            menor = *pmenor;
        }
        puts("-------------------------------");
        printf("O menor valor digitado foi: %d\n", menor);
    }

    return 0;
}