#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *vet;
    vet = (int *)malloc(10 * sizeof(int));
    vet = (int *)realloc(vet, 22 * sizeof(int));

    for (int i = 0; i < 22; i++)
    {
        vet[i] = i;
    }

    for (int i = 0; i < 22; i++)
    {
        printf("%d", vet[i]);
    }

    free(vet);
}