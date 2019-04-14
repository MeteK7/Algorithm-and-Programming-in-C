#include <stdio.h>
#include <stdlib.h>

int main() /*This program sums numbers in a certain range.*/
{

	int x,y,sum = 0;
	printf("Define the limit of numbers you want to sum.\n");
	printf("From: ");
	scanf("%d",&x);
	printf("To: ");
	scanf("%d",&y);

	for (x; x<=y; x++)
	{
		sum += x;
	}
	printf("The sum: %d\n", sum);
	system("pause");
	return 0;
}

