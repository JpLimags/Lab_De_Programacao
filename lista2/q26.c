#include <stdio.h>

int binario(int x){
    return (x == 0) ? 0: (binario (x / 2) * 10) | (x % 2);
}



int main(){
    
    int i;
    printf("|");printf("----------------------------------");printf("|");
    printf("|");printf("Tabela de conversoes");              printf("|");
    printf("|");printf("----------------------------------");printf("|");
    printf("\n");
    for(i = 1; i <= 156; i++){
        printf("                       Numero: %d | Binario: %d | Octal: %o | hexadecimal: %x                       \n",i, binario(i), i, i);   
    }
    
    return 0;
}