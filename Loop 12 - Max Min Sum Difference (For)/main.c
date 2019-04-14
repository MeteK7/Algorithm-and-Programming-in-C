#include <stdio.h>
#include <stdlib.h>

int main()	//This program wants you to enter the amount of numbers. Then it finds the sum, max and min of these numbers and it calculates difference between max and min numbers.
{
	int amount, number, i, max, min, sum = 0;
	printf("Enter the amount of numbers that you will enter: ");
	scanf("%d", &amount);
	for (i = 0; i < amount; i++)
	{
		printf("Enter the %d. number: ", i + 1);
		scanf("%d", &number);
		sum += number;
		if (i == 0)
		{
			max = number;
			min = number;
		}
		else
		{
			if (number < min)
				min = number;

			if (number > max)
				max = number;
		}
	}
	printf("\nSum: %d Max: %d Min: %d Max-Min: %d\n", sum, max, min, max - min);
	system("pause");
	return 0;
}
