#include <stdio.h>

void verifica_se_palindromo(char vet[], int tam){
    int i, aux, fim;

    fim = tam - 1;
    for(i = 0; i < tam/2; i++){
        if(!(vet[i] == vet[fim])){
            printf("Não é palindromo");
            return 0;
        }
        fim--;
    }
    printf("Palindromo");
}

int main(){
    char vet[] = "paulo";

    verifica_se_palindromo(vet, 5);

    return 0;
}