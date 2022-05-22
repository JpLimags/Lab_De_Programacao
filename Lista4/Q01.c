#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y, sum, *num1 = NULL, *num2 = NULL, *psum = NULL, res;

    puts("Digite um numero: ");
    scanf("%d", &num1);

    puts("Digite um numero: ");
    scanf("%d", &num2);

    num1 = &x;
    num2 = &y;
    psum = &sum;

    *psum = *num1 +  *num2;

    printf("%d + %d = %d\n",*num1,*num2,*psum);

    return 0;
}