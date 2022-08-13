#include <stdio.h>
#include <stdlib.h>

int somaRec(int x){
	if(x == 0){
		return 0;
	}
	
	return x + somaRec(x-1);
}

int main(){
	int x;
	scanf("%d", &x);
	printf("%d", somaRec(x));
	
	return 0;
}
