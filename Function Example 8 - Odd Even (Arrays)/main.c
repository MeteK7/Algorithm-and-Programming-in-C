#include <stdio.h>
#include <stdlib.h>

void oddeven(int number[],int amount)
{
	int i;
	for(i=0;i<amount;i++)
	{
		if(number[i]%2==0)
		{
			printf("%d is an even number.\n",number[i]);
		}
		else
		{
			printf("%d is an odd number.\n",number[i]);
		}
	}
}
int main ()
{
	int number[256],amount,i;
	scanf("%d",&amount);
	for(i=0;i<amount;i++)
	{
		scanf("%d",&number[i]);
	}
	oddeven(number,amount);
	system("pause");
	return 0;
}
