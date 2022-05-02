#include <stdio.h>

#define Tam 15

int main(){

    float nums[Tam], maior = 0, menor;
    int i;

    for(i=0; i < Tam; i++){

    printf("Digite um valor: ");
    scanf("%f", &nums[i]);

    }

    maior = nums[0];
    menor = nums[0];

    for(i=1;i<Tam;i++){

        
        if(nums[i] > maior){
            maior = nums[i];
        }else if(nums[i] < menor){
            menor = nums[i];
        }
    }

    printf("A media do maior valor digitado, com o menor foi: %.1f", (maior+menor)/Tam);

    return 0;
}