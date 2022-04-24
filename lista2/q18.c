#include <stdio.h>

int main(){

    float num = 0;
    int i = 0;

    for(num=1;num>=0 && i!=64; num=num+num){
        i++;
        printf("%d  tem %.0f graos\n",i,num);
    }
    return 0;
}