#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int number,*p;

    p=&number;

    printf("Number's address= %p\nInside of pointer= %p\nPointer's address= %p\n",&number,p,&p);

    scanf("%d",p); /*We did not write "&p" because "p" means "&number" here.*/

    printf("%d\n",*p); /*"*p" means the content of the address which is kept by p pointer. */

    system("pause");

    return 0;

}
