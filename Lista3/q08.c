#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 100

void bubleSort(int *Vnums, int intervalo);
void selectSort(int *Vnums, int intervalo);

int main(int argc, char const *argv[])
{
    int  Vnums[100], intervalo;
    
    puts("Digite o intervalo que deseja trabalhar: ");
    scanf("%d", &intervalo);
    
    for (int i = 0; i < intervalo; i++)
        Vnums[i] = rand() % intervalo;

    puts("Vetor ordenado por Bubble sort");
    bubleSort(Vnums, intervalo);
    
    printf("\n");
    puts("Ordenado por selecaoo");
    selectSort(Vnums, intervalo);

    return 0;
}

void bubleSort(int *Vnums, int intervalo)
{
    int aux = 0;
    for (int i = 0; i < intervalo; i++)
    {
        if (Vnums[i] > Vnums[i + 1])
        {
            aux = Vnums[i];
            Vnums[i] = Vnums[i + 1];
            Vnums[i + 1] = aux;
        }
    }

    for (int j = 0; j < intervalo; j++)
    {
        printf("%d", Vnums[j]);
    }
}

void selectSort(int *Vnums, int intervalo)
{
    int aux;
    for (int i = 0; i < intervalo - 1; i++)
    {
        for (int j = i + 1; j < intervalo; j++)
        {
            if (Vnums[i] > Vnums[j])
            {
                aux = Vnums[i];
                Vnums[i] = Vnums[j];
                Vnums[j] = aux;

            }
        }
    }

    for (int L = 0; L < intervalo; L++)
    {
        printf("%d", Vnums[L]);
    }
}