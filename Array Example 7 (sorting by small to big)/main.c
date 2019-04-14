#include <stdio.h>
#include <stdlib.h>

int main()	/*This program sorts numbers by small to big*/
{
	int amount, number[200], temp;
	printf("--This program sorts numbers by small to big.--\n\n");
	printf("Enter the amount of numbers you will enter: ");
	scanf("%d", &amount);
	printf("Enter the numbers:\n");
	for (int i = 0; i < amount; i++)
	{
		scanf("%d", &number[i]);
	}

	for (int i = 0; i < amount-1; i++)
	{
		for (int x = i+1; x < amount; x++)
		{
			if (number[i] > number[x])
			{
				temp = number[i];
				number[i] = number[x];
				number[x] = temp;
			}
		}
	}
	for (int i = 0; i < amount; i++)
	{
		printf("%d ", number[i]);
	}
	system("pause");
	return 0;
}

