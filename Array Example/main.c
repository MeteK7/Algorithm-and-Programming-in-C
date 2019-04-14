#include <stdio.h>
#include <stdlib.h>

int main()	//This program wants you to enter two arrays of 4 elements. Then, it sums the two arrays.
{
	int a[4], b[4], sum[4];	//These arrays are one-dimensional arrays.
	for (int i = 0; i < 4; i++)
	{
		scanf("%d%d", &a[i], &b[i]);
		sum[i] = a[i] + b[i];
	}
	printf("\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", sum[i]);
	}
	system("pause");
	return 0;
}
