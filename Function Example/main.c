#include <stdio.h>
#include <stdlib.h>
int sum(int x,int y)
{
    int result;
    result=x+y;
    return result;
}
int main()
{
    int a,b,summation;
    scanf("%d%d",&a,&b);
    summation=sum(a,b);
    printf("\nSummation: %d\n",summation);
    system("pause");
    return 0;
}
