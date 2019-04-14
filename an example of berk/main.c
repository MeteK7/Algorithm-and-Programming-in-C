#include <stdio.h>
#include <stdlib.h>

void change (int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            a[i]=a[i]+1;
        else
            a[i]=a[i]+1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    change(a,5);
    return 0;
}
