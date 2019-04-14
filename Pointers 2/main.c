#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *q,*p,m,j;
    q=&m;
    p=&j;
    m=5;
    *p=*q;
    printf("%d %d %d\n",*q,*p,j);

    system ("pause");
    return 0;
}
