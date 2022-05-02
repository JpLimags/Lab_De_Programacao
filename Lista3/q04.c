#include <stdio.h>
#include <string.h>

#define TAM 30

void compManual(char *str1, char *str2);

int main(){

    char str1[TAM], str2[TAM];
    int resp;

    printf("Digite uma palavra: ");
    scanf("%s", str1);

    printf("Digite outa palavra: ");
    scanf("%s", str2);

    //Verficando se são iguais utilizando strcmp

    resp = strcmp(str1, str2);

    if(resp == 0){

        printf("As strings digitadas sao iguais");
    }else{
        
        printf("As strigs digitadas sao diferentes");
    }

    return 0;
}


void compManual(char *str1, char *str2){

    int i = 0;

    while(1);{
        
        if(str1[i] == str2 [i] &&  strlen(str1) == strlen(str2)){

            printf("As strings são iguais");
        }else{
            printf("As strings são diferentes");
        
        }

        i++;
    }

}