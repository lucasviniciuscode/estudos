#include <stdio.h>
#include <math.h>

typedef struct
{
    double x, y;
} Ponto;

int main()
{
    int i, j, quant_pontos;
    double dist = 0;
    double menorDistancia;

    Ponto pont[quant_pontos];

    scanf("%lf", &pont[0].x);
    scanf("%lf", &pont[0].y);
    scanf("%lf", &pont[1].x);
    scanf("%lf", &pont[1].y);

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (i != j)
            {
                dist = sqrt((pont[i].x - pont[j].x) * (pont[i].x - pont[j].x) + (pont[i].y - pont[j].y) * (pont[i].y - pont[j].y));
            }
            if (menorDistancia == 0)
            {
                menorDistancia = dist;
            }
            if (dist < menorDistancia)
            {
                menorDistancia = dist;
            }
        }
    }
    printf("%0.4f\n", menorDistancia);

    return 0;
}