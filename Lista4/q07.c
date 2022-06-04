#include <stdio.h>
#include <stdlib.h>
#define TAM 100

void Concat(char *, char *);

int main(int argc, char const *argv[])
{
    char str1[TAM], str2[TAM];

    puts("Insira a primeira frase: ");
    scanf("%[^\n]s", &str1);
    getchar();

    puts("Insira a segunda frase: ");
    scanf("%[^\n]s", &str2);

    Concat(str1,str2);

    return 0;
}

void Concat(char *s1, char *s2){

    char *p = NULL;

    p = malloc((strlen(s1) + strlen(s2)) * sizeof(char));

    int i = 0;
    while (*(s1 + i) != '\0'){
        *(p + i) = *(s1 + i);
        i ++;
    }

    int j = 0;
    while (*(s2 + j) != '\0')
    {
        *(p + i + j) = *(s2 + j);
        j++;
    }

    for (int i = 0; i < (strlen(s1) + strlen(s2)); i++)
    {
        printf("%c",*(p + i));
    }
    

}