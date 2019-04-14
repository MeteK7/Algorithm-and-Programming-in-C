#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a,b,division=0;
    scanf("%d %d",&a,&b);
    if(a>0 && b>0)
    {
       for(;a>=b;)
        {
            a=a-b;
            division++;
        }
    }
    if(a<0 && b<0)
    {
        for(;a<=b;)
        {
            a=a-b;
            division++;
        }
    }
    if(a<0 && b>0)
    {
        for(;a<=-b;)
        {
            a=a+b;
            division--;
        }
    }
    if(a>0 && b<0)
    {
        for(;a>=-b;)
        {
            a=a+b;
            division--;
        }
    }
    printf("Division= %d Remainder= %d\n",division,a);
    system("pause");
    return 0;

}

/*See Function Example 10 - division by subtraction operator (Recursion) if you want to learn how to solve this problem using recursion.*/


/*The following source code is only valid for positive integers.*/

/*

#include <stdio.h>
#include <stdlib.h>

int main ()
{


    int a,b,division=0;
    scanf("%d %d",&a,&b);
    for(;a>=b;)
    {
        a=a-b;
        division++;
    }
    printf("Division= %d Remainder= %d\n",division,a);
    system("pause");
    return 0;

}

*/
