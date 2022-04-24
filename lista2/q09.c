#include <stdio.h>

int main(void) 
{
    int n = 1, ant = 0, resul = 0, aux,i;    

    printf("Abaixo termos a serie de fibonacci ate o 20 termo: \n");
    for(i = 0; i<20; i++){

        resul = n + ant;
        aux = n;
        n = resul; 
        ant = aux;
        printf("%d\n", resul);
    }

  return 0;
}