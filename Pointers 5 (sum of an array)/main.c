#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[7],sum=0,i,*po;

    for(i=0;i<7;i++)
    {
        scanf("%d",&nums[i]);
    }

    po=&nums[0];

    for(i=0;i<7;i++)
    {
        sum+=(*po);
        po+=1;
    }

    po=nums;    /*The name of an array is a pointer that keeps the address of the first element in the array. /*  po=nums; is same as po=&nums[0];  */

    for(i=0;i<7;i++)
    {
        printf("%d ",*po);
        po++;
    }

    printf("Sum: %d\n",sum);

    system("pause");
    return 0;
}
