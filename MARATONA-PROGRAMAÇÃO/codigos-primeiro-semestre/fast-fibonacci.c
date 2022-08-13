#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n;
    double fib;
    scanf("%d", &n);

    fib = (pow((1.0 + sqrt(5.0))/2.0,n)-pow((1.0 - sqrt(5.0))/2.0,n))/sqrt(5.0);
    printf("%0.1f\n", fib);
    return 0;
}