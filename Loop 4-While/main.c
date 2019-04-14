#include <stdio.h>
#include <stdlib.h>
int main(void)  /*This program sums integer numbers you enter.*/
{
	int n, sum = 0;

	printf("This program sums integer numbers you enter.\n");
	printf("Enter numbers (Press 0 to terminate the summation process.):\n");
	scanf("%d", &n);
	while (n != 0) {
		sum += n;
		scanf("%d", &n);
	}
	printf("The sum is: %d\n", sum);

	system ("pause");
	return 0;
}
