#include <stdio.h>
#define TAM 25


int main(){
    
    char strUser[TAM], i = 0;

    printf("Digite uma pequena frase ou alguma palavra: ");
    scanf("%[^\n]s", strUser);
    getchar();
    
    do{
        if (strUser[i] != 0) i++;
        else break;
    }while (1);
    
    printf("A frase ou palavra digitada possui %d caracteres",i);
    
    return 0;
}