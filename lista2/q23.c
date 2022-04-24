#include<stdio.h>
int main(void)
{
	int x = 200, y = 10;
	printf("Valor inicial de x: %d \n",x);
	
	printf("\n-------------------- Pos-incremento --------------------- \n\n");
	printf("Valor de x na mesma linha do pos-incremento:  %d \n",x++); //vai mostrar 100
	printf("Valor de x na linha seguinte ao pos-incremento: %d \n",x); //vai mostr 101
		
	printf("\n-------------------- Pre-incremento --------------------- \n\n");
	printf("Valor de x na mesma linha do pre-incremento: %d \n",++x); //vai mostrar 102	
	
	printf("Valor inicial de y: %d \n",y);

    /*
        - Abaixo vermos a diferença entre as formas de incrementação;

        1)Na pós incrmentação a variavel é incrementada após sua utilização
        , ou seja, primeiro se mostra o valor e só depois se incrementa.

        2)Já no pre-incremento a variável é incrementada antes do processamento
        do comando atual
    */