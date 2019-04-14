#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number, i, c = 0;
	printf("Give me a number and I can find out if the number you give is a prime number or not.\n");
	scanf("%d", &number);
	for (i = 2; i < number; i++)
	{
		if (number%i == 0)
		{
			c++;
		}
	}
	if (c == 0 && number > 1)
	{
		printf("%d is a prime number.\n", number);
	}
	else
	{
		printf("%d is not a prime number.\n", number);
	}
	system("pause");
	return 0;
}
