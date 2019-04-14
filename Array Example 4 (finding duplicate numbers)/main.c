#include <stdio.h>
#include <stdlib.h>
int main()	/*This program finds duplicate numbers and writes how many times these numbers are repeated. */
{
	int number[200], counter = 0,amount;
	printf("Enter the amount of numbers: ");
	scanf("%d", &amount);
	for (int i = 0; i < amount; i++)
	{
		scanf("%d", &number[i]);
	}

	for (int x = 0; x < amount; x++)
	{
		for (int y = 0; y < amount; y++)
		{
			if (number[x] == number[y])
			{
				for (int z = 0; z < x; z++)
				{
				 	if (number[z] == number[x])
					{
						counter = -1;
					}
				}
				counter++;
			}
		}
		if (counter != 0)
		{
			printf("\n%3d is repeated %d times.\n", number[x], counter);
			counter = 0;
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
