#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[3][3],i,j,n,k,counter;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            counter=0;
            for(n=0;n<3;n++)
            {
                for(k=0;k<3;k++)
                {
                    if(num[i][j]==num[n][k])
                        counter++;
                    if(counter>1)
                        goto jump;
                }
            }
        }
    }
    jump:
    if(counter==1)
        printf("You win!\n");
    else
        printf("Your sudoku is invalid!\n");

    system("pause");
    return 0;
}
