#include <sdtio.h>

int main(){
   printf("Calculando numero PI usando serie de Leibniz\n");
   printf("O numero PI e gerado atraves de sucessivas somas e subtracoes \n");

   double pi = 4;
   double operador = -1;

   double i;
   for(i = 0; i < 900000000; i++){
      pi += operador*(4/(3+2*i));

      operador *= -1;
   }

   printf("O resultado aproximado foi de: %.8f...\n", pi);

   return 0;
}