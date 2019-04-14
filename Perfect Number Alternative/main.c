#include <stdlib.h>
#include <stdio.h>

int main()
{
	int number, sum = 0;
	printf("Write a number you want to find out if it's a perfect number or not.\n");
	scanf("%d", &number);
	for (int i = 1; i <= number; i++)
	{
		if (number%i == 0)
		{
			sum += i;
		}
	}
	if (sum/2 == number && number != 0)
	{
		printf("\n%d is a perfect number.\n\n", number);
	}
	else
	{
		printf("\n%d is not a perfect number.\n\n", number);
	}
	system("pause");
	return 0;
}
