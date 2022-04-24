#include <stdio.h>

int main(){

   float tempC, C, aux;

   for(tempC = 0 ; tempC < 100;){
       tempC += 10;    
       C = (tempC*9/5) + 32; 
    
       printf("A temperatura %.0fC, convertida em Farenheit, fica:  %.0fF\n", tempC, C);
   }
    return 0;
}