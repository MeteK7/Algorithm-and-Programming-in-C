#include <stdio.h>
#include <stdlib.h>

int powercalculation (int number, int power,int temp,int counter)
{

    if(counter!=power)
        {
            temp=temp*number;
            counter++;
            return powercalculation(number,power,temp,counter);
        }


    else
        return temp;



}
int main ()
{
    int number,power,result,temp,counter=1;

    scanf("%d",&number);
    scanf("%d",&power);
    temp=number;
    result=powercalculation(number,power,temp,counter);
    printf("%d^%d= %d\n",number,power,result);

    system("pause");
    return 0;
}
