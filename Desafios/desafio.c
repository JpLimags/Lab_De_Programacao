#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binario(int x){
    return (x == 0) ? 0: (binario (x / 2) * 10) | (x % 2); //Transforma número decimal em binario.
}

int main()
{
    unsigned char armario = 0; //00000000
    int options, i, realease, ArmaNum[8] = {1,2,3,4,5,6,7,8};
    srand(time(NULL));
    
    do{
        printf("Escolha uma opcao:\n[1]Ocupar armario.\n[2]Liberar armario.\n[3]Sair\n");
        scanf("%d",&options);
        
        if(options == 1){
            
            do{
                i = rand() % 8; //Gera valores inteiros aleatoriamente de 1 a 8;
            }while(ArmaNum[i] == 0);
            
            printf("Infelizmente o armario  %d esta ocupado.",ArmaNum[i]);
            switch(ArmaNum[i]){
                case 1:
                    armario = armario | 128; 
                    break;
                case 2:
                    armario = armario | 64; 
                    break;
                case 3:
                    armario = armario | 32; 
                    break;
                case 4:
                    armario = armario | 16; 
                    break;
                case 5:
                    armario = armario | 8; 
                    break;
                case 6:
                    armario = armario | 4; 
                    break;
                case 7:
                    armario = armario | 2; 
                    break;
                case 8:
                    armario = armario | 1; 
                    break;
            }
            ArmaNum[i] = 0; 
            printf("Armarios: %d\n",binario(armario));
            continue;
        }
        else if(options == 2){
            printf("Qual armario deseja desocupar? %d ",binario(armario));
            scanf("%d",&realease);
            switch(realease){
                case 1:
                    armario = armario & ~128; 
                    break;
                case 2:
                    armario = armario & ~64; 
                    break;
                case 3:
                    armario = armario & ~32; 
                    break;
                case 4:
                    armario = armario & ~16; 
                    break;
                case 5:
                    armario = armario & ~8; 
                    break;
                case 6:
                    armario = armario & ~4; 
                    break;
                case 7:
                    armario = armario & ~2; 
                    break;
                case 8:
                    armario = armario & ~1; 
                    break;
            }
            printf("Armarios: %d\n",binario(armario));
            continue;
        }
    }while(options != 3);
    return 0;
}