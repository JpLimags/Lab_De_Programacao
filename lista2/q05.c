#include <stdio.h>

int main(){

    int n, maior = 0, menor = 0, aux;

    while(n != 0){

        printf("Digite um numero, caso deseje encerrar digite 0): ");
        scanf("%d", &n);

        if(maior == 0 && menor == 0){
            maior = n;
            menor = n;
        }else{

            if(n != 0 && n > maior){

                maior = n;
            }else if(n != 0 && n < menor){
                
                menor = n;
            }
        }
    }

    printf("O maior numero digitado foi: %d\n", maior);
    printf("O menor numero digitado foi: %d\n", menor);
    
    return 0;
}