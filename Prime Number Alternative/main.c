#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number, sum = 0;

	printf("Give me a number and I can find out if the number you give is a prime number or not.\n");
	scanf("%d", &number);
	for (int i = 1; i <= number; i++)
	{
		if (number%i == 0)
		{
			sum += i;
		}
	}
	if (sum - 1 == number)
	{
		printf("\n%d is a prime number.\n\n", number);
	}
	else
	{
		printf("\n%d is not a prime number.\n\n", number);
	}

	system("pause");
	return 0;
}
