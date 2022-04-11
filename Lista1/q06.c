#include <stdio.h>

int main(){

    //Declaração das variáveis
    float altura,peso, pesoIdeal;
    char sexo [20];

    //Entada de dados
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite seu sexo: ");
    scanf("%s", &sexo);

    //Condicionais
    if (sexo == "Masculino"){
        pesoIdeal = 72.7*altura - 58;
        printf("O peso ideal para o usuario é de: %f", pesoIdeal);
    }
    else {
        pesoIdeal = 62.1 *altura - 44.7;
        printf("O peso ideal para o usuario é de: %f", pesoIdeal);
    }

    return 0;
}