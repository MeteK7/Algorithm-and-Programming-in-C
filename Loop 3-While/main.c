#include <stdio.h>
#include <stdlib.h>

int main()///* This program prints a table of squares using a while statement */
{
	int x,i;
	printf("I can print a table of squares.\nEnter amount of numbers in table: ");
	scanf("%d", &x);
	i = 0;
	while (i <= x)
	{
		printf("%d^2  = %5d\n",i, i*i);
		i++;
	}

	system("pause");
	return 0;
}
