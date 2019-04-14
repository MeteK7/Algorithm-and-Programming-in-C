#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main()
{
    double r,area,circumference, *pr,*parea,*pcircumference;

    pr=&r;
    parea=&area;
    pcircumference=&circumference;

    printf("Enter the radius of the circle:\n");

    scanf("%lf",pr);

    *parea=PI*pow(*pr,2);
    *pcircumference=2*PI*(*pr);

    printf("Area= %.2f Circumference= %.2f\n",*parea,*pcircumference);

    system("pause");
    return 0;
}
