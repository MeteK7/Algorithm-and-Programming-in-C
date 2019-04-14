#include <stdlib.h>
#include <stdio.h>

int main()	//This program finds factorial of numbers you give.
{
	for(;;)
	{
		int number, i, factorial = 1, m;

		printf("Please give me a number you want to find its factorial.\n");
		scanf("%d", &number);
        i=number;
		if (number >= 0)
		{
			for (i ; i > 0; i--)
			{
				factorial *= i;
			}
			printf("%d!= %d\n", number, factorial);

		}
		else
		{
			printf("The number cannot be less than 0 if you want to find its factorial.\n");
		}
		printf("Do you want to continue or not?  (1 to continue, any other numbers to exit)\n");
		scanf("%d", &m);
		if (m == 1)
		{
			continue;
		}
		else
		{
			break;
		}
	}
	system("pause");

	return 0;

}
