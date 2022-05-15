#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define TAM 100

int main()
{
    char frase[TAM];
    char letra;
    int i;
    bool contem = false;
    
    puts("Digite uma frase: ");
    scanf("%[^\n]",frase);
    puts("Digite um caracter: ");
    scanf(" %c",&letra);
    
    for(i = 0; i < strlen(frase); i++){
        if(frase[i] == letra){
            contem = true;
        }
    }
    
    if(contem == true){
        printf("O caractere escrito esta contido na frase");
    }
    
    printf("O caractere escrito nao esta contido na frase");

    return 0;
}