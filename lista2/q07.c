#include <stdio.h>

int main(){

    float num, divisor;

    printf("Digite o numero que deseja dividir: ");
    scanf("%f", &num);

    printf("Agora digite o seu divisor: ");
    scanf("%f", &divisor);

        
    if(divisor != 0){
        printf("O resultado da divisao, foi: %.2f", num/divisor);
    }else{
        while(divisor == 0){

            printf("Por favor digite um valor diferente de 0, no divisor: ");
            scanf("%f", &divisor);
            
            if(divisor != 0){
                printf("O resultado da divisao, foi: %.2f", num/divisor);
            }
        }
    }


    return 0;
}