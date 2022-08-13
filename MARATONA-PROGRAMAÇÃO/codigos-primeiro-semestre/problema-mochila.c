#include<stdio.h>
#include<string.h>

typedef struct{
    int peso;
    float valor;
} Item;
typedef struct{
    int capacidade;
    char itens;
} Mochila;

void main()
{
    Item item[4];
    item[0].peso = 7;
    item[0].valor = 42;
    item[1].peso = 3;
    item[1].valor = 12;
    item[2].peso = 4;
    item[2].valor = 40;
    item[3].peso = 5;
    item[3].valor = 25;
    Mochila mochila;
    mochila.capacidade=10;
    float maiorValor=0;
    int somaPesos = 0, i, j, aux, numItens = 4;
    int tab[numItens+1][mochila.capacidade+1];

    for(j=0; j<=mochila.capacidade; j++)
        tab[0][j] = 0;
    for(i=0; i<=numItens; i++)
        tab[i][0] = 0;

    for(i=1; i <= numItens; i++){
        for(j=1; j <= mochila.capacidade; j++){
            // tab[i][j] = 1;
            if(item[i-1].peso <= mochila.capacidade){
                if((item[i-1].valor + tab[i-1][j-item[i-1].peso]) > tab[i-1][j]){
                    tab[i][j] = item[i-1].valor + tab[i-1][j-item[i-1].peso];
                } else {
                    tab[i][j] = tab[i-1][j];
                }
            } else {
                tab[i][j] = tab[i-1][j];
            }
        }
    }

    for(i=0; i <= numItens; i++){
        for(j=0; j <= mochila.capacidade; j++){
            printf(" %d ", tab[i][j]);
    }
        printf("\n");
    }
}