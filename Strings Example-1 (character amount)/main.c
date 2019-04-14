#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,counter=0,visibility=1;
    char ch[100];
    puts("Enter a ten-letter string.");
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        for(j=0;ch[j]!='\0';j++)
        {
            if(ch[i]==ch[j])
            {
                for(k=0;k<i;k++)
                {
                    if (ch[k]==ch[i])
                    {
                        visibility=0;
                        break;
                    }
                }
                counter++;
            }

        }

        if(visibility==1)
            {
                printf("The amount of \"%c\" character: %d.\n",ch[i],counter);
            }
        counter=0;
        visibility=1;
    }

    return 0;
}

