#include <stdio.h>
#include <stdlib.h>

int main()	//This program prints requested amount of asterisk characters to the screen.
{
	int x, i;
	do
	{
		scanf("%d", &x);
		for (i = 0; i<x; i++)
		{
			printf("*");
		}
		printf("\n");
	} while (x>0);
	system("pause");
	return 0;
}
