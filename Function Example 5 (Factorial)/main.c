#include <stdio.h>
#include <stdlib.h>

int factorial(int number)
{
    int i,multiplication=1;

    for(i=number;i>0;i--)
    {
        multiplication*=i;
    }
    return multiplication;
}
int main ()
{
    int number,i;
    printf("Enter a number you want to find it's factorial: ");
    scanf("%d",&number);
    printf("\n%d!= %d\n\n",number,factorial(number));
    system("pause");
    return 0;
}
