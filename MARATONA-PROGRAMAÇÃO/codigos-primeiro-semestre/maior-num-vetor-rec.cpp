#include <stdio.h>
#include <stdlib.h>

int maiorElemento(int vetor[], int tam, int indice){
	if(tam == 0){
		return vetor[indice];
	}
	else{	
		if(vetor[indice] < vetor[tam-1]){
			return maiorElemento(vetor, tam-1, tam-1);
		} else {
			return maiorElemento(vetor, tam-1, indice);
		}
	}
}

int main(){
	int vetor[5] = {2,1,-5,4,3};
	printf("%d", maiorElemento(vetor, 5 , 0));
	return 0;
}
