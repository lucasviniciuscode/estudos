#include <stdio.h>
#include <stdlib.h>

int call=0;

int fib(int n){

	if(n==0){
		return 0;
	}
	else if (n==1){
		return 1;
	}else{
			return fib(n-1)+fib(n-2);
	}

}

int main(){

	int j=0,x,n;

	scanf("%d", &x);

	while( j<x && scanf("%d", &n) != EOF){
		j++;
		fib(n);
		printf("fib(%d) = %d calls = %d\n", n, call,fib(n));
		call=0;
	}

return 0;
}
