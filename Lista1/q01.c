#include <stdio.h>

int main()
{
    int x1,x2,x3;

    //Na primeira instrução quem tem quem maior precedencia é o operador * seguido do operador /
    x1 = 7 + 3*6/2-1;
    //Na segunda instrução quem tem quem maior precedencia é o operador % seguido do operador * e / 
    x2 = 2%2 + 2*2-2/2;
    //Na terceira instrução quem tem quem maior precedencia são os parenteses seguido do operador *,/ e por ultimo o operador + 
    x3 = (3 * 9 * (3 + (9*3/ (3) ) ) );
    
    printf("O resultado da primeira instrucao foi: %d\n",x1);
    printf("O resultado da segunda instrucao foi: %d\n",x2);
    printf("O resultado da terceira instrucao foi: %d\n",x3);


    return 0;
}
