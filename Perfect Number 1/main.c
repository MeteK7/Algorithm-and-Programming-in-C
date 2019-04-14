#include <stdlib.h>
#include <stdio.h>

int main()
{
	int number, sum = 0;
	printf("Write a number you want to find out if it's a perfect number or not.\n");
	scanf("%d", &number);

	for (int i = 1; i < number; i++)
	{
		if (number%i == 0)
		{
			sum += i;
		}
	}
	printf("\nPositive divisors of %d: ", number);
	for (int i = 1; i <= number; i++)
	{
		if (number%i == 0)
		{
			printf("%d ", i);

		}
	}
	if (sum == number && number != 0)
	{
		printf("\n\n%d is a perfect number.\n\n", number);
	}
	else
	{
		printf("\n\n%d is not a perfect number.\n\n", number);
	}
	system("pause");
	return 0;
}
