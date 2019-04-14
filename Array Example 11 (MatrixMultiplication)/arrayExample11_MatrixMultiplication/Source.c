#include <stdio.h>
#include<stdlib.h>

int main()
{
	int a[2][4], b[4][2],result[2][2],sum=0,i,j,m;


	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	for ( i = 0; i < 2; i++)
	{
		for ( j = 0; j < 2; j++)
		{
			for ( m= 0; m < 4; m++)
			{
				sum += a[i][m] * b[m][j];
			}
			result[i][j] = sum;
			sum = 0;
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}