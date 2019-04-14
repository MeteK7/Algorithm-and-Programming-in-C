#include <stdio.h>
#include <stdlib.h>

	int fact(int n)
	{
	  if (n <= 1)
	    return 1;
	  else
	    return n * fact(n - 1);
	}
int main()
{
    int number;
    scanf("%d",&number);
    printf("%d!= %d\n",number,fact(number));
    system("pause");
     return 0;
}
