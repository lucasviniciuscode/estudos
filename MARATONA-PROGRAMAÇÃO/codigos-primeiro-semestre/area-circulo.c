#include<stdio.h>
#include<math.h>

int main()
{
    float raio, area;
    float pi = 3.14159;
    scanf("%f", &raio);

    printf("%f", raio);
    area = pi * (raio*raio);
    printf("A=%0.4f", area);

    return 0;
}