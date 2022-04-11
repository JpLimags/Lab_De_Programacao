#include <stdio.h>

int main()
{   

    int num; 

    printf("Digite um numero: ", num);
    scanf("%d", &num);

    num > 0 ? printf("O valor absoluto do número foi %d", num) : printf("O valor absoluto do numero foi %d", num * (-1));

    return 0;
}