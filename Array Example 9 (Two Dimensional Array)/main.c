#include <stdio.h>
#include <stdlib.h>

int main() /*This program wants you to enter 2 two-dimensional arrays size of 3 to 3. Then, it multiplies the two arrays you entered. After that, it finds averages of rows of the new array and prints it. */
{
	int a[3][3], b[3][3], multiplication[3][3], sum[3], average[3], i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
		    printf("Enter %d,%d cell of A matrix: ",i+1,j+1);
			scanf("%d", &a[i][j]);

		}
		printf("\n");
	}
	printf("\n\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
		    printf("Enter %d,%d cell of B matrix: ",i+1,j+1);
		    scanf("%d", &b[i][j]);
		}
		printf("\n");
	}
	printf("\n\nA Matrix:\n\n");
    for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
		   printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\nB Matrix:\n\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
		   printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n\nMultiplication of A and B matrices:\n\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
		    multiplication[i][j] = a[i][j] * b[i][j];
		   printf("%d ",multiplication[i][j]);
		}
		printf("\n");
	}
	printf("\n\nRow-by-Row summation of the multiplication matrix:\n\n");
	for (i = 0; i < 3; i++)
	{
		sum[i] = 0;
		for (j = 0; j < 3; j++)
		{
			sum[i] += multiplication[i][j];
		}
		printf("%d\n", sum[i]);
	}
	printf("\n\nRow-by-Row average of the multiplication matrix:\n\n");
	for (i = 0; i < 3; i++)
	{
	    average[i] = sum[i] / 3;
		printf("%d\n", average[i]);
	}

	system("pause");
	return 0;
}
