#include <stdio.h>
#include <stdlib.h>

int main()	/*This program finds kth largest number in an array.*/
{
	int amount, number[200], temp, row;
	printf("Enter the amount of numbers you will enter: ");
	scanf("%d", &amount);
	printf("Enter the numbers:\n");
	for (int i = 0; i < amount; i++)
	{
		scanf("%d", &number[i]);
	}
	printf("Which largest number do you want to find?\n");
	scanf("%d", &row);
	for (int i = 0; i < amount; i++)
	{
		for (int x = i + 1; x < amount; x++)
		{
			if (number[i] < number[x])
			{
				temp = number[i];
				number[i] = number[x];
				number[x] = temp;
			}
		}
	}
	printf("\nSorting: ");
	for (int i = 0; i < amount; i++)
	{
		printf("%d ", number[i]);
	}
	printf("\n\n%d. largest number is %d.\n\n", row, number[row - 1]);
	system("pause");
	return 0;
}
