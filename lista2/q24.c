#include <stdio.h>

int main(){

        int cat1, cat2, hipotenusa;

    for(hipotenusa = 1; hipotenusa < 500; hipotenusa++) {
        
        for(cat1 = 1; cat1 < 500; cat1++) {
            
            for(cat2 = 1; cat2 < 500; cat2++) {
                
                int adj = cat1 * cat1 + cat2 * cat2;
                int opt = hipotenusa * hipotenusa;

                if(adj == opt) {
                    printf("Sao considerados numeros de pitagoras: %d - %d - %d\n", hipotenusa, cat1, cat2);
                } else if(adj > opt) {
                    break;
                }
            }
        }
    }

    return 0;
    
}