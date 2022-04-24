#include <stdio.h>

int main() {
    int num, aux, revs;     

  printf("Digite um numero de 5 digitos: ");
  scanf("%d", &num);


  aux = num;
  revs = 0;
    
    while (aux != 0) {
        revs = revs * 10 + aux % 10;  
        aux = aux / 10;                     
    }

    if (revs == num){
        printf("O numero %d,  e palindrome\n", num);
    }else{
    printf("O numero %d,  nao e palindrome\n", num);
    }

  return 0;
}