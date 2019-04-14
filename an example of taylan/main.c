#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5],i,j,sum;
    for (i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]==0)
                a[i][j]=2;
            if (a[i][j]==1)
                a[i][j]=5;
        }
    }
    for (i=0;i<5;i++)
    {
        sum=0;
        for(j=0;j<5;j++)
        {
            sum=sum+a[i][j];
        }
        printf("%d\n",sum);
    }

    system("pause");
    return 0;
}
