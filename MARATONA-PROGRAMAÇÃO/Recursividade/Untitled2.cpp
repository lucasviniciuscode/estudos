#include <stdio.h>
#include <stdlib.h>

int vericaPar(int x){
	if(x == 0){
		return 0;
	}
	if(x % 2 == 0){
		printf("%d ", x);
	}
	
	return vericaPar(x-1);
}

int main(){
	int x;
	scanf("%d", &x);
	vericaPar(x);
	
	return 0;
}
