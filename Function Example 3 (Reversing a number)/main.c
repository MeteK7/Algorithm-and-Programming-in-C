#include <stdio.h>
#include <stdlib.h>

void reverse(int a)
{
    while(a>0)
    {
    printf("%d",a%10);
    a/=10;
    }
}
int main()
{
   int number;
   scanf("%d",&number);
   reverse(number);
   system("pause");
    return 0;
}
