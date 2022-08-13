#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expo){
	if(expo == 0){
		return 1;
	}
	
	return base * potencia(base,expo-1);
	
}

int main(){
	int b, e;
	scanf("%d%d", &b, &e);
	printf("%d", potencia(b,e));
	
	return 0;
}
