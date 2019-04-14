#include <stdio.h>
#include <stdlib.h>

int multiplication (int number1,int number2,int *mult,int *i)
{
    if (*i<number1 && *i<number2)
    {
        if (number1>=number2)
            {
                (*mult)+=number1;
                (*i)++;
                multiplication (number1,number2,mult,i);
            }
        else
            {
                (*mult)+=number2;
                (*i)++;
                multiplication (number1,number2,mult,i);
            }
    }
    else if (*i>(number1) && *i>(number2))
    {
        if (number1>=number2)
            {
                (*mult)-=number2;
                (*i)--;
                multiplication (number1,number2,mult,i);
            }
        else
            {
                (*mult)-=number1;
                (*i)--;
                multiplication (number1,number2,mult,i);
            }
    }
    else if (*i!=(number1) && *i!=(number2))
    {
        if ((-number1)<=number2 && number1<number2)
            {
                (*mult)-=number2;
                (*i)--;
                multiplication (number1,number2,mult,i);
            }
        if ((-number1)>number2 && number1<number2)
            {
                (*mult)+=number1;
                (*i)++;
                multiplication (number1,number2,mult,i);
            }

        if ((-number1)>=number2 && number1>number2)
            {
                (*mult)+=number2;
                (*i)++;
                multiplication (number1,number2,mult,i);
            }
        if ((-number1)<number2 && number1>number2)
            {
                (*mult)-=number1;
                (*i)--;
                multiplication (number1,number2,mult,i);
            }
    }
    return *mult;
}
int main()
{
    int number1,number2,mult=0,i=0;
    scanf("%d %d",&number1,&number2);
    printf("%d\n",multiplication(number1,number2,&mult,&i));
    system("pause");
    return 0;
}
