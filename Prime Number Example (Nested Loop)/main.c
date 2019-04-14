#include <stdio.h>
#include <stdlib.h>

int main()	//This program wants you to enter a number you want to find out whether it is a prime number.
			//Then, it finds 10 prime numbers after the number that you entered if the number you entered is a prime number.
{
	int number, i, counter = 0;
	char prime = 'Y';
	printf("I want you to enter a number you want to find out whether it is a prime number.\n");
	scanf("%d", &number);
	for (i = 2; i < number; i++)
	{
		if (number%i == 0)
		{
			prime = 'N';
			break;
		}
	}
	if (prime == 'Y' && number != 1 && number != 0)
	{
		printf("%d is a prime number.\n", number);
		number += 1;
		while (counter < 10)
		{
			prime = 'Y';
			for (i = 2; i < number; i++)
			{
				if (number%i == 0)
				{
					prime = 'N';
					break;
				}
			}

				if (prime=='Y')
				{
					printf("%d ", number);
					counter++;
				}

			number++;
		}

	}
	else
	{
		printf("It is not a prime number.\n");
	}
	system("pause");
	return 0;
}
