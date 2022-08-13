#include <stdio.h>
#include <math.h>
//Erro de tempo limite na plataforma

#define MAX 50

struct
{
    int hora;
    int min;
} typedef hora;

int calculaTempo(hora horaIni, hora horaFin)
{
    int min;
    if (horaFin.hora == horaIni.hora && horaIni.min > horaFin.min)
    {
        min = (((horaFin.hora + 24) * 60) + horaFin.min) - (horaIni.hora * 60 + horaIni.min);
    }
    else
    {
        min = ((abs(horaFin.hora - 12) * 60 + horaFin.min) - (abs(horaIni.hora - 12) * 60 + horaIni.min));
    }
    return abs(min);
}

int verificaFim(hora horaIni, hora horaFin)
{
    if (horaIni.hora == 0 && horaIni.min == 0 && horaFin.hora == 0 && horaFin.min == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    hora hora[2];
    int i = 0, fim = 0;
    int vet[MAX];

    while (!fim)
    {
        scanf("%d %d %d %d", &hora[0].hora, &hora[0].min, &hora[1].hora, &hora[1].min);
        fim = verificaFim(hora[0], hora[1]);
        if (fim)
        {
            break;
        }
        vet[i] = calculaTempo(hora[0], hora[1]);
        i++;
    };

    for (int aux = 0; aux < i; aux++)
    {
        printf("%d\n", vet[aux]);
    }

    return 0;
}
