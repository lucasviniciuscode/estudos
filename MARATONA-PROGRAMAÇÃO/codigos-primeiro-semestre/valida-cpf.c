#include <stdio.h>

int validaCpf(char cpf[11])
{
    int i, peso = 10, primeiroDigito = 0, segundoDigito = 0, calculoUm, calculoDois;
    for (i = 0; i <= 8; i++)
    {

        primeiroDigito += (cpf[i] - 48) * peso;
        peso--;
    }
    peso = 11;
    for (i = 0; i <= 9; i++)
    {
        segundoDigito += (cpf[i] - 48) * peso;
        peso--;
    }
    calculoUm = ((primeiroDigito % 11) < 2) ? 0 : 11 - (primeiroDigito % 11);
    calculoDois = ((segundoDigito % 11) < 2) ? 0 : 11 - (segundoDigito % 11);

    if (calculoUm != cpf[9] - 48 || calculoDois != cpf[10] - 48)
    {
        return 0;
    }

    return 1;
}

int main()
{
    char cpf[11];

    scanf("%s", &cpf);

    if (!validaCpf(cpf))
    {
        printf("Cpf inválido\n");
        return;
    }
    printf("Cpf válido\n");

    return 0;
}
