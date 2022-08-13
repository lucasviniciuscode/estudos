#include <stdio.h>
#include <stdlib.h>

int multSoma(int x, int y){
	if(x == 0){
		return 0;
	}
	
	return y + multSoma(y, x-1);
}

int main(){
	int x, y;
	scanf("%d%d", &x, &y);
	printf("%d", multSoma(x,y));
	
	return 0;
}
