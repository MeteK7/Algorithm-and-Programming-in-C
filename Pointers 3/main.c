#include <stdio.h>
#include <stdlib.h>

void f1 (double x);
void f2 (double *x);

int main ()
{
    double x=50;
    printf("The value of x before calling the functions: %.2f\n\n",x);

    f1 (x);

    printf("The value of x after calling f1 function: %.2f\n\n",x);

    f2 (&x);

    printf("The value of x after calling f2 function: %.2f\n\n",x);

    system("pause");
    return 0;
}

void f1 (double x)
{
    x=98;
    printf("x value in f1 function: %.2f\n\n",x);
}

void f2 (double *x)
{
   *x=98;
   printf("The content of the address held by the x pointer: %.2f\n\n",*x);
}
