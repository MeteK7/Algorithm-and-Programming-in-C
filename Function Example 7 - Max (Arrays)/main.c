#include <stdio.h>
#include <stdlib.h>

int maxf(int number[],int amount)
{


	int max=0,i;
	for(i=0;i<amount;i++)
	{
	if (number[i]>max)
		max=number[i];
	}
	return max;
}
int main ()
{
	int number[256],i,amount;
	scanf("%d",&amount);
	for(i=0;i<amount;i++)
	{
		scanf("%d",&number[i]);

	}
	printf("%d",maxf(number,amount));
	system("pause");
	return 0;
}
