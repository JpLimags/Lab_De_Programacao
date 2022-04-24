#include <stdio.h>

int main(){

    int F, i, j,fat;
    
    F = i;
    for(i=1; i <= 10; i++){
        fat = F;
        while(F != 1){
            fat = fat * (F - 1);
            F = F - 1;
        }
        printf(" O fatorial do numero %d, e: %d\n", i, fat);
        F = i+1;
    }
    
    return 0;
}