#include <stdio.h>

void inverter(int vet[], int tam){
    int i, aux, fim;

    fim = tam - 1;
    for(i = 0; i < tam/2; i++){
        aux = vet[i];
        vet[i] = vet[fim];
        vet[fim] = aux;
        fim--;
    }
    for(i = 0; i < tam; i++){
        printf("%d", vet[i]);
    }
}

int main(){
    int vet[] = {1,2,3,4,5};

    inverter(vet, 5);

    return 0;
}