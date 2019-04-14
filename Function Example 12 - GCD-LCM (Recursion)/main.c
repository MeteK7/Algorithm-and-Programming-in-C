#include <stdio.h>
#include <stdlib.h>

int findgcd(int number1,int number2,int gcd,int divider);    /*GCD = Greatest Common Divisor*/

int findlcm(int number1, int number2, int lcm, int divider);   /*LCM = Least Common Multiple*/

int main()
{
    int a,b,result,gcd=1,lcm=1,divider=2;
    printf("This program finds GCD and LCM of 2 numbers you enter.\n\n");
    printf("First number: ");
    scanf("%d",&a);
    printf("Second number: ");
    scanf("%d",&b);
    printf("\nGCD(%d,%d)= %d\n\n",a,b,findgcd(a,b,gcd,divider));
    printf("LCM(%d,%d)= %d\n\n",a,b,findlcm(a,b,lcm,divider));
    system("pause");
    return 0;
}

int findgcd(int number1,int number2,int gcd,int divider)
{
    if (number1==1 && number2==1)
    {
        return gcd;
    }
    else
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
        return findgcd(number1, number2, gcd, divider);
    }
}

int findlcm(int number1, int number2, int lcm, int divider)
{
    if (number1==1 && number2==1)
    {
        return lcm;
    }
    else
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
        return findlcm(number1, number2, lcm, divider);
    }

}

/*See the project "Function Example 6 (GCD - LCM)". It is another way to solve this question.*/
