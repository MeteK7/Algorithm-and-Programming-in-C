#include <stdio.h>
#include<stdlib.h>

int main()//This program multiplies a number 0 to 10.
{
	int multiplication, number, i;
	printf("Give me a number.\n");
	scanf("%d", &number);
	printf("\n");
	i = 0;
	while(i<=10)
	{
		multiplication = i*number;
		printf("%d*%d = %d\n",number,i,multiplication);
		i++;
	}
	system("pause");
	return 0;
}
