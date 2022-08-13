#include <stdio.h>
#include <stdlib.h>

long long int fatorial(int x){
	if(x==0){
		return 1;
	}else{
		return x*fatorial(x-1);
	}
}

int main(){
	int a, b;
	long long int somaFat;
	
	while(scanf("%d %d", &a, &b) != EOF){
		somaFat = fatorial(a) + fatorial(b) ;
		printf("%lld\n", somaFat);
	}
	
return 0;
}
