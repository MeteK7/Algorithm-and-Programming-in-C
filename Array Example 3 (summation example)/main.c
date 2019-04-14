#include <stdio.h>
#include <stdlib.h>

int main() //This program sums the digits of an entered number.
{
	int number, digit[10], sum = 0, i,m;
	printf("Enter a number you want to find the summation of the digits of it.\n");
	scanf("%d", &number);
	for (i = 0; number > 0; i++)
	{
		digit[i] = number % 10;
		sum += digit[i];
		number /= 10;
	}
	printf("%d", digit[i - 1]);
	for (m = i - 2; m >= 0; m--)
	{
		printf(" + %d", digit[m]);
	}
	printf(" : %d\n", sum);
	system("pause");
	return 0;
}
