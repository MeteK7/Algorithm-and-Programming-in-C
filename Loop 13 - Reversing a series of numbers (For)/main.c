#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
	int a[N], i;
	printf("Enter %d numbers\n", N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
		}
	printf("In reverse order: ");
	for (i = N - 1; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}
