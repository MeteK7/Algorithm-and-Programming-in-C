#include <stdio.h>
#include<stdlib.h>

int main()//This program multiplies a number from a limit to a limit.
{
	int multiplication, number,start,end;
	printf("Enter a number.\n");
	scanf("%d", &number);
	printf("From which limit to a limit do you want to multiply this number?\n");
	printf("From: ");
	scanf("%d",&start);
	printf("To: ");
	scanf("%d",&end);
	printf("\n");
	if (start<=end)
    {
        while(start<=end)
        {
           multiplication = start*number;
           printf("%d*%d = %d\n",number,start,multiplication);
           start++;
        }
    }
    else
    {
        while(start>=end)
        {
           multiplication = start*number;
           printf("%d*%d = %d\n",number,start,multiplication);
           start--;
        }
    }
	printf("\n");
	system("pause");
	return 0;
}
