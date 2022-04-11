#include <stdio.h>

int main()
{
    int num, qd, tn, mt;
    
    printf("Digite um valor inteiro qualquer: ");
    scanf("%d", &num);
    
    qd = num * num;
    printf("O quadrado do valor digitado e: %d\n",qd);
    
    tn = num * 3;
    printf("O quadrado do valor digitado e: %d\n",tn);

    mt = num / 2;
    printf("O quadrado do valor digitado e: %d\n",mt);

    return 0;
}