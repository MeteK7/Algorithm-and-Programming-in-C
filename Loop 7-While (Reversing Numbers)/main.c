#include<stdio.h>
#include<stdlib.h>
int main()// This program reverses a number you give.
{
	int number;
	printf("Give me a number that you want to reverse.\n");
	scanf("%d", &number);
	while (number>0)
	{
		printf("%d", number % 10);
		number /= 10;
	}
	printf("\n");
	system("pause");
	return 0;
}
