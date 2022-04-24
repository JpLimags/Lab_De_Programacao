#include <stdio.h>

int main(){

    int n, maior = 0, menor = 0, aux;

    while(n != 0){

        printf("Digite um numero, caso deseje encerrar digite um numero negativo e par): ");
        scanf("%d", &n);

        if(n %2 == 0 && n < 0){
            break;
        }

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

    printf("O produto do maior numero pelo menor foi: %d\n", maior*menor);
    
    return 0;
}