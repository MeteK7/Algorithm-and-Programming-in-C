#include <stdio.h>
#include <stdlib.h>

int exponentiation(int x,int y)
{
    if (y==1)
        return x;
    else
        return x*exponentiation(x,y-1);
}
int main()
{
    int number,exponent;
    scanf("%d",&number);
    scanf("%d",&exponent);
    printf ("%d^%d= %d\n",number,exponent,exponentiation(number,exponent));
    system("pause");
    return 0;
}
