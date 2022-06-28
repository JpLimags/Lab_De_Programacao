#include <stdio.h>
#include <stdlib.h>

#define TAM 2

struct Aluno{

    float Notas[TAM];
    float soma;
    float mean;
};

int main(){

    struct Aluno a;

    for(int i = 0; i < TAM; i++){

        printf("Digite a nota %d, do aluno: ", i+1);
        scanf("%f", &a.Notas[i]);
    }

    
    puts("As notas do aluno foram: ");
    for(int j = 0; j < TAM; j++){

        printf("Nota %d: %.2f\n", (j+1),a.Notas[j]);
    }

    for(int j = 0; j < TAM; j++){


        a.soma += a.Notas[j];
    }

    a.mean = (a.soma) / TAM;

    printf("A media final foi:\n%.2f", a.mean);

    return 0;
}
