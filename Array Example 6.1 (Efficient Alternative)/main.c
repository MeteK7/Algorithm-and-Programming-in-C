#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()	/*This program finds kth least and largest number in an array.*/
{
	int amount, temp, rowLeast, rowLargest;
	printf("Enter the amount of numbers you will enter: ");
	scanf("%d", &amount);
	int number[amount], numberReversed[amount];
	printf("Enter the numbers:\n");
	for (int i = 0; i < amount; i++)
	{
		scanf("%d", &number[i]);
	}

	for (int i = 0; i < amount; i++)/*Algorithm to arrange numbers in ascending order*/
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
	for (int i = amount - 1, x = 0; i >= 0, x < amount; i--, x++)/*Reversing the array. Is it an efficient way to reverse an array?*/
	{
		numberReversed[x] = number[i];
	}

	while(true){
            printf("Which least number do you want to find?: ");
            scanf("%d", &rowLeast);
            if(rowLeast>amount || rowLeast<=0)
                printf("You are out of range. Try again.\n\n");
            else
                break;
	}

    printf("Sorting: ");
	for (int i = 0; i < amount; i++)
	{
		printf("%d ", number[i]);
	}
	printf("\n\n%d. least number is %d.\n\n", rowLeast, number[rowLeast - 1]);

	while(true){
            printf("Which largest number do you want to find?: ");
            scanf("%d", &rowLargest);
            if(rowLargest>amount || rowLargest<=0)
                printf("You are out of range. Try again.\n\n");
            else
                break;
	}

    printf("Sorting: ");
	for (int i = 0; i < amount; i++)
	{
		printf("%d ", numberReversed[i]);
	}
	printf("\n\n%d. largest number is %d.\n\n", rowLargest, numberReversed[rowLargest - 1]);

	system("pause");
	return 0;
}
