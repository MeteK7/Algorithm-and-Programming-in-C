#include <stdio.h>
#include <stdlib.h>

int findgcd(int number1,int number2);    /*GCD = Greatest Common Divisor*/

int findlcm(int number1, int number2);   /*LCM = Least Common Multiple*/

int main()
{
    int a,b,result;
    printf("This program finds GCD and LCM of 2 numbers you enter.\n\n");
    printf("First number: ");
    scanf("%d",&a);
    printf("Second number: ");
    scanf("%d",&b);
    printf("\nGCD(%d,%d)= %d\n\n",a,b,findgcd(a,b));
    printf("LCM(%d,%d)= %d\n\n",a,b,findlcm(a,b));
    system("pause");
    return 0;
}

int findgcd(int number1,int number2)
{
    int gcd=1,divider=2;
    while (number1>1 || number2>1)
    {
        if (number1%divider==0 && number2%divider==0)
        {
            gcd*=divider;
            number1/=divider;
            number2/=divider;
        }
        else if (number1%divider==0)
        {
            number1/=divider;
        }
        else if(number2%divider==0)
        {
            number2/=divider;
        }
        else
        {
            divider++;
        }
    }
    return gcd;
}
int findlcm(int number1, int number2)
{
   int lcm=1,divider=2;
    while (number1>1 || number2>1)
    {
        if (number1%divider==0 && number2%divider==0)
        {
            lcm*=divider;
            number1/=divider;
            number2/=divider;
        }
        else if (number1%divider==0)
        {
            lcm*=divider;
            number1/=divider;
        }
        else if(number2%divider==0)
        {
            lcm*=divider;
            number2/=divider;
        }
        else
        {
            divider++;
        }
    }
    return lcm;
}

/*See the project "Function Example 12 - GCD-LCM (Recursion)". It is another way to solve this question.*/
