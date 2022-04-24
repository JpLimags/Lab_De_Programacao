#include <stdio.h>

int main(){

    float Vp, parcelas, entrada;

    while(Vp != 0){

        printf("Digite o valor do produto,(caso deseje encerrar digite 0):\nR$");
        scanf("%f", &Vp);

        if(Vp == 0){
            break;
        }else{
            entrada = (Vp - (Vp/3))/2;
            parcelas =  (Vp - entrada)/ 2;

            printf("O valor da entrada foi de: R$%.2f\n", entrada);
            printf("O valor das duas parcelas foi de: R$%.2f\n", parcelas);
        }
    }

    return 0;
}