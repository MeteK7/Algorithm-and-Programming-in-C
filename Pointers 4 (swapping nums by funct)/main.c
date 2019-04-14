#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swapping: a=%d, b=%d\n",a,b);
    swap(&a, &b);
    printf("After swapping:  a=%d, b=%d\n",a,b);
    system("pause");
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}



