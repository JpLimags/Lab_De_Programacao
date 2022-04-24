#include <stdio.h>

int main(){

    int heightP = 150, heightJ = 110, cont=0;

    while(heightP >= heightJ){

        heightP +=2;
        heightJ += 3;

        cont += 1;
    }

    printf("Jose levara %d anos, para chegar na altura de Pedro.", cont);

    return 0;
}