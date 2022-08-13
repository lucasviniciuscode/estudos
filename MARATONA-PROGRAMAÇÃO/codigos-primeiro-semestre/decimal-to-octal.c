#include <stdio.h>
int soma = 0;

int decimalToOct(int n)
{
	int i = n % 8;

	if (n > 0)
	{
		decimalToOct(n / 8);
		soma = soma + i;
	}
	return soma;
}

int main()
{
	int num;

	do
	{
		scanf("%d", &num);
		if(num != 0)
			printf("%d\n", decimalToOct(num));

		soma = 0;
	} while (num != 0);

	return 0;
}