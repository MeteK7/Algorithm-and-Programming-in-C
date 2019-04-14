#include <stdio.h>
#include <stdlib.h>

int rec(int, int, int *);

int main ()
{
    int a,b,division=0;

    scanf("%d %d",&a,&b);

    a=rec(a,b,&division);

    printf("Division= %d Remainder= %d\n",division,a);


    system("pause");
    return 0;

}

int rec(int a, int b, int *division)
{
    if (a>0 && b>0)
    {
        if (a<b)
        {
            return a;
        }
        else
        {
            a = a - b;
            (*division)++;
            return a = rec(a, b, division);
        }
    }

    if(a<0 && b<0)
    {
        if(a>b)
        {
            return a;
        }
        else
        {
            a=a-b;
            (*division)++;
            return a = rec(a, b, division);
        }
    }

    if(a<0 && b>0)
    {
        if(a>-b)
        {
            return a;
        }
        else
        {
            a=a+b;
            (*division)--;
            return a = rec(a, b, division);
        }
    }

    if(a>0 && b<0)
    {
        if(a<-b)
        {
            return a;
        }
        else
        {
            a=a+b;
            (*division)--;
            return a = rec(a, b, division);
        }
    }

}


/*See Loop 15 - For (division by subtraction operator) if you want to learn how to solve this problem using loop.*/
