#include <stdio.h>
#include <stdlib.h>

/*It is better and easier to write GCD-LCM algorithm using pointers. Thanks to "call by reference", we did not have to write two different functions for the GCD-LCM.*/

void findgcdlcm(int number1,int number2,int *gcd,int *lcm)    /*GCD = Greatest Common Divisor*/   /*LCM = Least Common Multiple*/
{
    int divider=2;
    while (number1>1 || number2>1)
    {
        if (number1%divider==0 && number2%divider==0)
        {
            (*gcd)*=divider;
            (*lcm)*=divider;
            number1/=divider;
            number2/=divider;
        }
        else if (number1%divider==0)
        {
            (*lcm)*=divider;
            number1/=divider;
        }
        else if(number2%divider==0)
        {
            (*lcm)*=divider;
            number2/=divider;
        }
        else
        {
            divider++;
        }
    }
}
int main()
{
    int a,b,result,gcd=1,lcm=1;
    printf("This program finds GCD and LCM of 2 numbers you enter.\n\n");
    printf("First number: ");

    scanf("%d",&a);
    printf("Second number: ");
    scanf("%d",&b);
    findgcdlcm(a,b,&gcd,&lcm);
    printf("\nGCD(%d,%d)= %d\n\n",a,b,gcd);
    printf("LCM(%d,%d)= %d\n\n",a,b,lcm);
    system("pause");
    return 0;
}
