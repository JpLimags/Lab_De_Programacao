#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50

int main(){    
    
    char str1[TAM], str2[TAM];
    char *p = NULL, *cp=NULL;
    
    int strTam = 0;

    printf("Digite uma string: ");
    scanf("%s", &str1);
    getchar();
    

    p = str1; 
    while(*(p + strTam) != '\0'){
        
        strTam++;
    }
    
    cp = str2;

    for(int i = 0; i < strTam; i++){

        *(cp + i) = *(p+i);
    }

    printf("%s", str2);
    return 0;
}