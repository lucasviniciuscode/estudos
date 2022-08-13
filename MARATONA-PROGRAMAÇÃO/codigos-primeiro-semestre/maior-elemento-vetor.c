#include<stdio.h>

void main()
{
    int vetor[4] = {-5,-3,-6,-10};
    int maior = 0;
    int i;
    maior = vetor[0];
    for(i=0; i<4; i++){
        if(vetor[i]>maior){
            maior = vetor[i];
        }
    }

    printf("%d", maior);
}