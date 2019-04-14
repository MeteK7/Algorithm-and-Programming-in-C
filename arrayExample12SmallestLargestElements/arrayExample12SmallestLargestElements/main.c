#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number[100], i, amount, max, min;
	printf("Define an amount of the array you will enter: ");
	scanf("%d", &amount);
	for (i = 0; i < amount; i++)
	{
		scanf("%d", &number[i]);
	}
	max = number[0];
	min = number[0];

	for (i = 0; i < amount; i++)
	{
		if (number[i] > max)
			max = number[i];
		else if (number[i] < min)
			min = number[i];
	}
	printf("The Smallest Element= %d\nThe Largest Element= %d\n", min, max);

	system("pause");
	return 0;
}
