#include <stdio.h>

int main()
{
    int n;
    int valor = 7;
    scanf("%d", &n);

    int  ASSI1 = 1, ASSI2 = 2, ASSI3 = 5;

    if(n >= 101){
        valor = valor + (n - 100) * ASSI3 + (100 - 30) * ASSI2 + (30 - 10) * ASSI1;
    } else if(n >= 31 && n<=100){
        valor = valor + (n - 30) * ASSI2 + (30 - 10) * ASSI1;
    } else if(n<30 && n > 10){
        valor = valor + (n - 10) * ASSI1;
    }

    printf("%d", valor);

    return 0;
}