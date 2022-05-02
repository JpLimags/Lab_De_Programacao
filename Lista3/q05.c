#include <stdio.h>
#include <string.h>

#define TAM 25

void concatManual(char *str1, char *str2);

int main(){

	char str1[TAM],	str2[TAM];

	
    printf("Digite uma string: ");
    scanf("%[^\n]s", str1);
    getchar();

    printf("Digite outra string: ");
    scanf("%[^\n]s", str2);

	strcat(str1, str2);

	printf("%s\n", str1);

	return 0;
}

void concatManual(char *str1, char *str2){

    int aux = strlen(str1); 

    for (int i = 0; str2[i] != '\0'; i++, aux++) {
        str1[aux] = str2[i];
    }

    str1[aux] = '\0';
    
    printf("A string concatenada ficou: %s",str1);
}