#include <stdio.h>

int main()
{
    int nun, num, maior = 0, soma = 0;

    scanf("%d%d", &nun, &num);

    int matriz[nun][num];

    for (int i = 0; i < nun; i++)
    {
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < nun; i++)
    {
        for (int j = 0; j < num; j++)
        {
            soma += matriz[i][j];
        }
        if (soma > maior)
        {
            maior = soma;
        }
        soma = 0;
    }

    for (int j = 0; j < nun; j++)
    {
        for (int i = 0; i < nun; i++)
        {
            soma += matriz[i][j];
        }
        if (soma > maior)
        {
            maior = soma;
        }
        soma = 0;
    }

    printf("%d", maior);

    return 0;
}