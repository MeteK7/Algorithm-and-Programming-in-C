#include <stdio.h>
#include <stdlib.h>

int main()  /*This program finds sum of numbers using the sum of terms formula.*/
{

    int x,y,sum;
	float term;
	printf("Define the limit of numbers you want to sum.\n");
	printf("From: ");
	scanf("%d",&x);
	printf("To: ");
	scanf("%d",&y);

	term=((y-x)/1)+1;
	sum=(term/2)*(y+x);

	printf("Sum of numbers between %d and %d = %d\n",x,y,sum);
	system("pause");
	return 0;
}
