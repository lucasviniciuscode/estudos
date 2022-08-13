#include <stdio.h>
#include <math.h>

typedef struct{
	int m;
	int n;
} Partida;

int main(){
	
	Partida partida[15];
	int equipe[16];
	int etapa, n = 1, aux = 0, i = 0;
	
	for(i = 0; i < 16; i++){
		equipe[i] = 65 + i;
		if(i == 15){
			break;
		}
		scanf("%d %d", &partida[i].m, &partida[i].n);
	}
		
	while(n < 5){
		etapa = 16 / pow( 2, n);
		for(i = aux; i < etapa + aux; i++){
			if(partida[i].m > partida[i].n){
				equipe[i - aux] = equipe[2 * (i - aux)];
			} else {
				equipe[i - aux] =  equipe[2 * (i - aux) + 1];
			}	
		}	
		aux = i;	
		n++;
	}
	
	printf("\n%c", equipe[0]);

	return 0;
}
