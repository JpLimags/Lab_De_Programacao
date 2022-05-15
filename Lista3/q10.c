#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3
#define QTD 100

int main(){
    
    int m[TAM][TAM];
    int x, count = 0;

    for(int k=0; k<TAM; k++){
        for (int j=0; j<TAM; j++){
            m[k][j] = rand() % 10;
        }
    }

    
    printf("Digite algum numero: ");
    scanf("%d", &x);
    
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++)
            
            if(x == m[i][j]){
                count++;
            }
    }
    
    printf("O numero %d apareceu  %d vezes\n", x,count);
    return 0;
}

