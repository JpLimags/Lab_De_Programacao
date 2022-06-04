#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50

int main(){

    char frase[TAM], *p;
    int count = 0;

    puts("Digite uma frase: ");
    scanf("%s", frase);
    
    p=frase;
    int i = 0;
    while(*(p + i) != '\0'){
        
        i++;
    }

    printf("A frase tem %d letras", i);

    return 0;
}