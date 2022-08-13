#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, soma = 0, somar = 1;

    do
    {
        scanf("%d", &num);
        if (num == -1){
            somar = !somar;
        }
        if (somar == 0 && num != -1){
            soma = soma - num;
        } else if(num != -1){
            soma = soma + num;
        }
    } while (num != 0);

    printf("%d\n", soma);

return (0);
}