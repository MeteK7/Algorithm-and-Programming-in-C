#include <stdio.h>
#include <stdlib.h>

int bigsum(int num) /*This program prints the sum of all numbers up to a given number using recursion*/
{
    if (num!=1)
    return num+=bigsum(num-1);
    else
        return 1;
}

int main ()
{
    int num;
    scanf("%d",&num);
    printf("The sum of all numbers up to %d: %d\n",num,bigsum(num));
    system("pause");
    return 0;
}
