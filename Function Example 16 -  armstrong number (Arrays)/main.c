#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int number,digit=0,sum=0,temp,remainder,temprem,i;

    scanf("%d",&number);

    temp=number;
    while(temp!=0)
    {
        temp/=10;
        digit++;
    }
    printf("Your number's digit is %d.\n",digit);

    temp=number;
    while(temp!=0)
    {
        remainder=temp%10;
        temprem=remainder;
        for(i=1;i<digit;i++)
        {
            temprem*=remainder;
        }
        sum+=temprem;
        temp/=10;
    }
    if(sum==number)
        printf("%d is an Armstrong number.\n",number);
    else
        printf("%d is not an Armstrong number.\n",number);

    system("pause");
    return 0;
}
