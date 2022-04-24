
/* 22. Escreva um programa que leia um numero inteiro e determine e imprima quantos digitos no inteiro sao algarismos 7. */

#include <stdio.h>

int main()
{
    int num = 0, numAux, numClone, i, contDig = 0, cont7 = 0;
    long int vetorNumeros[1000]; //Valor maximo.
    
    printf("Digite um numero de ate 100 algarismo: ");
    scanf("%d",&num);
    numAux = num;
    numClone = num;

    if (num == 0) {
         contDig = 1;
    }else{
        while (num != 0){
            contDig = contDig + 1;
                num = num / 10;
            }
    }
    
    for(i = 0; i < contDig; i++){
        vetorNumeros[i] = numClone % 10; 
        numClone = numClone / 10;
        if(numClone<0){
            break;
        }
    }
    
    for(i = 0; i < contDig; i++){
        if(vetorNumeros[i] == 7){
            ++cont7;
        }
    }
    
    printf("No numero %d, existem %d numeros 7", numAux, cont7);
    
    return 0;
}