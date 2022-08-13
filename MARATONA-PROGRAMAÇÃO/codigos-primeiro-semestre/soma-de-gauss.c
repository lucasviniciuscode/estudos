#include <stdio.h>

void soma(int n){
    int result;

    result = ((1 + n) * n)/ 2;

    printf("%d", result);
}

int main(){
    int num;

    scanf("%d", &num);
    soma(num);

    return 0;
}