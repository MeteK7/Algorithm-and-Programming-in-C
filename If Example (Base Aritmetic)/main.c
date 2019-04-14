#include <stdio.h>
#include<stdlib.h>

int main()
{
	int number, base, mod[20],mod1, choice, i,k=0,multiplication=1,total;

	printf("Do choices below:\n\n");
	printf("Press 1 if you want to turn a number to a base.\n");
	printf("Press 2 if you want to turn a number to 10 base.\n");
	scanf("%d", &choice);
	if (choice == 1)
	{
		printf("Give me a number.\n");
		scanf("%d", &number);
		printf("Which base do you want to turn this number to?\n");
		scanf("%d", &base);
		i=0;
		while(number!=0)
		{
			mod[i] = number%base;
			number = number / base;
			i++;

		}
		for (int m=i-1; m>= 0;m--)
		{

			printf("%d", mod[m]);
		}

	}
	else if (choice == 2)
	{
		printf("Give me a number.\n");
		scanf("%d", &number);
		printf("What is this number's base?\n");
		scanf("%d", &base);
		mod1 = number % 10;
		k += mod1;
		number /= 10;
		for(;number>0;)
		{
			mod1 = number % 10;
			number /= 10;
			multiplication *= base;
			total = mod1 * multiplication;
			k += total;

		}
		printf("%d", k);

	}
	printf("\n");
	system("pause");
	return 0;

}
