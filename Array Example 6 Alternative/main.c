#include <stdio.h>
#include <stdlib.h>

int main()	/*This program finds kth least and largest number in an array.*/
{
	int amount, number[200], number2[200], temp, row,row2,i,x;
	printf("Enter the amount of numbers you will enter: ");
	scanf("%d", &amount);
	printf("Enter the numbers:\n");
	for (i = 0; i < amount; i++)
	{
		scanf("%d", &number[i]);
	}

	for (i = 0; i < amount; i++)
	{
		for (x = 0; x < amount; x++)
		{
			if (number[i] <= number[x])
			{
				temp = number[i];
				number[i] = number[x];
				number[x] = temp;
			}
		}
	}
	for (i = amount - 1, x = 0; i >= 0, x < amount; i--, x++)
	{
		number2[x] = number[i];
	}

	printf("Which least number do you want to find?: ");
	scanf("%d", &row);
    printf("Sorting: ");
	for (i = 0; i < amount; i++)
	{
		printf("%d ", number[i]);
	}
	printf("\n\n%d. least number is %d.\n\n", row, number[row - 1]);

	printf("Which largest number do you want to find?: ");
	scanf("%d", &row2);
    printf("Sorting: ");
	for (i = 0; i < amount; i++)
	{
		printf("%d ", number2[i]);
	}
	printf("\n\n%d. largest number is %d.\n\n", row2, number2[row2 - 1]);
	system("pause");
	return 0;
}
