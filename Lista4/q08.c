#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

int main(){

    char str1[TAM], letra;
    char *s=NULL, *pL=NULL;
    int key;

    printf("Digite uma frase ou palavra: ");
    scanf("%[^\n]s", &str1);
    getchar();

    printf("Digite a letra que deseja procurar: ");
    scanf("%c", &letra);
    
    
    s = str1;
    pL = &letra;
    
    for(int i = 0; i < strlen(s); i++){

        if(*(s + i) != *pL){
            key = 0;
        }else{
            key = 1;
        }
    }

    if(key == 0){
        printf("Infelizmente a letra %c, nao foi encontrada na palavra !", *pL);
    }else{
        printf("A letra %c, foi encontrada na palavra !", *pL);
    }
    return 0;
}