#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 4
#define TAMV 4

int main(){

    float mediaGeo, mediaAri;
    int soma = 0, Vnums[TAM],produto = 1, j;
    srand(time(NULL));

    
    for(int i = 0; i < TAMV; i++){
        Vnums[i] = (rand() % (19 + 1));
        //printf("%d\n",Vnums[i]);
    }

    for(int j = 0; j < TAMV; j++){

        soma += Vnums[j];
        produto *= Vnums[j];
    }

        mediaAri = (float) soma/TAM;
        mediaGeo = pow(produto,(1.0/TAMV));

    printf("A media aritmetica foi: %2.f\nA media geometrica foi: %.2f", mediaAri, mediaGeo);
    return 0;
}