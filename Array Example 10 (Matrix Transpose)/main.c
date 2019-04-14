#include <stdio.h>
#include <stdlib.h>

int main () /*This program finds transpose of a matrix.*/
{
    int ar[3][3],temp[3][3],i,z;

    for(i=0;i<3;i++)
    {
        for(z=0;z<3;z++)
        {
            scanf("%d",&ar[i][z]);
            temp[z][i]=ar[i][z];

        }
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(z=0;z<3;z++)
        {
            printf("%d ",temp[i][z]);
        }
        printf("\n");
    }

    system ("pause");
    return 0;
}
