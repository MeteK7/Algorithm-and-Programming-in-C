#include <stdio.h>
#include <stdlib.h>

int main()	//This program wants you to enter the amount of numbers. Then it finds the sum, max and min of these numbers and it calculates difference between max and min numbers.
{
	int amount, number[200], i, max, min, sum = 0;
	printf("Enter the amount of numbers that you will enter: ");
	scanf("%d", &amount);
	for (i = 0; i < amount; i++)
	{
		printf("Enter the %d. number: ", i + 1);
		scanf("%d", &number[i]);
		sum += number[i];
	}
	max = number[0];
	min = number[0];

		for(i=1;i<amount;i++)
		{
			if (number[i] < min)
				min = number[i];

			if (number[i] > max)
				max = number[i];
		}

	printf("\nSum: %d Max: %d Min: %d Max-Min: %d\n", sum, max, min, max - min);
	system("pause");
	return 0;
}
