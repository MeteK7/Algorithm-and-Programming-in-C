#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()  /*This program capitalizes the initials of the words of the text you enter.*/
{
    char s[50],letter;
    int i,len;
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        letter=s[i];

        if( i==0 || s[i-1]==' ')
        {
            if(letter>='a' && letter<='z')
            {
                letter=letter-32;
                s[i]=letter;
            }
        }
    }

        puts(s);

    system("pause");
    return 0;
}
