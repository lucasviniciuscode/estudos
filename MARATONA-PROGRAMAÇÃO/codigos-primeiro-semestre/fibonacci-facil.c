#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    double fib;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        fib = (pow((1.0 + sqrt(5.0)) / 2.0, i) - pow((1.0 - sqrt(5.0)) / 2.0, i)) / sqrt(5.0);
        printf("%0.0f", fib);
        if (i != n - 1)
        {
            printf(" ");
        } else {
            printf("\n");
        }
    }

    return 0;
}