#include <stdio.h>
#include <stdlib.h>

void frequency (int ar[][200],int *oddc,int *evenc, int limitrow, int limitcol)
{
    int i,j;
    for(i=0;i<limitrow;i++)
    {
        for(j=0;j<limitcol;j++)
        {
            if (ar[i][j]%2==0)
                (*evenc)++;
            else
                (*oddc)++;
        }
    }
}
int main()
{
    int ar[200][200],limitrow,limitcol,oddc=0,evenc=0,i,j;
    printf("Row length: ");
    scanf("%d",&limitrow);
    printf("Coulomb length: ");
    scanf("%d",&limitcol);
    for(i=0;i<limitrow;i++)
    {
        for(j=0;j<limitcol;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    frequency(ar,&oddc,&evenc,limitrow,limitcol);
    printf("Odd number frequency= %d\nEven number frequency= %d\n",oddc,evenc);

    system("pause");
    return 0;
}
