#include <stdio.h>

int somaIndices(char vet[])
{
    int indice, i, soma = 0;
    int size = strlen(vet);

    for (i = 0; i < size; i++)
    {
        if (vet[i] >= 97 && vet[i] <= 122)
        {
            indice = vet[i] - 96;
            soma = soma + indice;
        }
        if (vet[i] >= 64 && vet[i] <= 90)
        {
            indice = vet[i] - 38;
            soma = soma + indice;
        }
    }

    return soma;
}

void e_primo(int num)
{
    int i, temp = 0;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            temp++;
            break;
        }
    }
    if (temp == 0 && num != 1)
    {
        printf("It is a prime word.");
    }
    else
    {
        printf("It is not a prime word.");
    }
}

int main()
{
    char str[100];
    int num;
    scanf("%s", str);
    num = somaIndices(str);
    e_primo(num);
    return 0;
}

