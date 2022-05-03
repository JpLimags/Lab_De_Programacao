#include <stdio.h>
#include <string.h>

#define TAM 50

int main(){

    char palavra[TAM];
    int i ;

    printf("Digite uma palavra: ");
    fgets(palavra, TAM, stdin);

    printf("%s", palavra, strlen(palavra) - 1);

    printf("Palavra invetida:\n");

    for(i = strlen(palavra)-2; i >= 0; i--){
        printf("%c", palavra[i]);
    }

    return 0;

}

