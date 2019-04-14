#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()  /*This program sorts a text you enter in alphabetical order.*/
{
    char text[100],chrc,chrc2;
    int len,i,j,temp;
    gets(text);
    len=strlen(text);
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            chrc=text[i];
            chrc2=text[j];
            if(text[i]>=97 && text[i]<=122)
            {
                chrc=text[i]-32;
            }
            if(text[j]>=97 && text[j]<=122)
            {
                chrc2=text[j]-32;
            }
            if(chrc<chrc2)
            {
                temp=text[i];
                text[i]=text[j];
                text[j]=temp;
            }
        }
    }
    puts(text);
    system("pause");
    return 0;
}
