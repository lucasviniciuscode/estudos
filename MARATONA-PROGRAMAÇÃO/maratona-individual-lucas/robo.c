#include <stdio.h>
#include <stdlib.h>
int gerarCaminho(int mat[5][5],int x,int y){
int i, j, aux1, aux2;

    for(aux1 = 0; aux1 < i; aux1++){
        for(aux2 = 0; aux2 < j; aux2++){
            // inicial
            if(aux1 == x && aux2 == y){
                mat[aux1][aux2] = 1;
            } else if (aux1 - 1 ) {
                mat[aux1][aux2] = 0;
            }
            // if(aux1 = 0 && aux2 == 1)
            //     mat[aux1][aux2] = 0;
            // else

        }
        printf("\n");
    }
    for(aux1 = 0; aux1 < i; aux1++){
        for(aux2 = 0; aux2 < j; aux2++){
            // if(aux1 = 1 && aux2 == 0)
            //     mat[aux1][aux2] = 0;
            printf("%d", mat[aux1][aux2]);
        }
        printf("\n");
    }
}

int main(void)
{
    int i, j, x, y, aux1, aux2;
    int mat[5][5];

    scanf("%d %d", &i, &j);
    scanf("%d %d", &x, &y);



    return 0;
}