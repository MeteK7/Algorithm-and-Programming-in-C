#include <stdio.h>
#include<stdlib.h>
#define MAX 256

int main() {		/*This program rotates numbers in an array*/
	int i, j, amount, tmp, rot, number[MAX], direction;
	printf("Enter the amount of numbers: ");
	scanf("%d", &amount);
	printf("\nEnter the numbers:\n");
	for (i = 0; i < amount; i++)
	{
		scanf("%d", &number[i]);
	}
	printf("\nWhere do you want to rotate the numbers? (1=Right/2=Left): ");
	scanf("%d", &direction);
	if (direction == 1)
	{
		printf("\nHow many times do you want to rotate these numbers by right?: ");
		scanf("%d", &rot);
		for (i = 0; i < rot; i++)
		{
			tmp = number[amount - 1];
			for (j = amount - 1; j > 0; j--)
			{
				number[j] = number[j - 1];
			}
			number[0] = tmp;
		}
		printf("\nRotated state of the numbers by right: ");
	}
	else if (direction == 2)
	{
		printf("\nHow many times do you want do rotate these numbers by left?: ");
		scanf("%d", &rot);
		for (i = 0; i < rot; i++)
		{
			tmp = number[0];
			for (j = 1; j < amount; j++)
			{
				number[j - 1] = number[j];
			}
			number[amount - 1] = tmp;
		}
		printf("\nRotated state of the numbers by left: ");
	}
	for (i = 0; i < amount; i++)
	{
		printf("%d ", number[i]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
