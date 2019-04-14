#include <stdlib.h>
#include <stdio.h>

int main()
{
	int number, sum = 0;
	printf("Write a number you want to find out if it's a perfect number or not.\n");
	scanf("%d", &number);
	printf("\nPositive divisors of %d: ", number);
	for (int i = 1; i <= number; i++)
	{
		if (number%i == 0)
		{
			sum += i;
			printf("%d ", i);
		}
	}

	if (sum / 2 == number && number != 0)
	{
		printf("\n\n%d is a perfect number.\n\n", number);
	}
	else
	{
		printf("\n\n%d is not a perfect number.\n\n", number);
	}
	if (sum - 1 == number)
	{
		printf("But, %d is a prime number.\n\n", number);
	}
	system("pause");
	return 0;
}
