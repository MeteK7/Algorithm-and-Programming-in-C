#include <stdio.h>
#include <stdlib.h>

int summation(int num[],int amount)
{
    int sum=0,i;
    for(i=0;i<amount;i++)
    {
        sum+=num[i];
    }
   return sum;
}
int main()
{
    int amount,number[256],i;
    scanf("%d",&amount);
    for(i=0;i<amount;i++)
    {
        scanf("%d",&number[i]);
    }
    printf("%d\n",summation(number,amount));
    system("pause");
    return 0;
}
