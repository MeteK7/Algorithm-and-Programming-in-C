#include <stdio.h>
#include <stdlib.h>

int main()  /*POINTERS ARE THE VARIABLES THAT KEEP ADDRESESS.*/
{
    int *point,number=37;   /*We assigned the point variable as a pointer using the * (indirection) operator. It will keep an address.*/

    point=&number; /*We assigned the address of number variable into the point pointer using the & symbol. */

    printf("%d\n",number); /*It shows the content of the number variable.*/
    printf("%p\n",&number); /*It shows the address of the number variable, NOT the content! Note that the %p is used for showing the address.*/
    printf("%p\n",point); /*It shows the content of the point pointer. The content is the address of the number variable here.*/
    printf("%p\n",&point); /*It shows the address of the point variable, NOT the content!*/

    *point=40;
    printf("%d\n",number);
    printf("%d\n",*point);

    system("pause");
    return 0;
}
