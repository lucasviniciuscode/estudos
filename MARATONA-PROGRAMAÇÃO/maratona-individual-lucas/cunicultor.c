#include <stdio.h>
#include <stdlib.h>

int quantidadeCasais(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return quantidadeCasais(n - 1) + quantidadeCasais(n - 2);
    }
}

int main(void)
{
    int i, N, gaiolas, quantidade = 0;
    scanf("%d", &N);
    int vet[N];

    while (N >= 0 && N <= 10000)
    {
        for (i = 0; i < N; i++)
        {
            scanf("%d", &vet[i]);
        }
        for (i = 0; i < N; i++)
        {
            if (vet[i] >= 1 && vet[i] <= 60)
                quantidade = quantidadeCasais(vet[i]);
            if (quantidade % 5 == 0)
            {
                gaiolas = quantidade / 5;
            }
            else
            {
                gaiolas = quantidade / 5 + 1;
            }
            printf("%d %d\n", quantidade, gaiolas);
        }
        scanf("%d", &N);
    }
    return 0;
}