#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len,i;
    char word[100];
    gets(word);
    len=strlen(word);
    for(i=0;i<len;i++)
    {
        if(word[i]==' ')
            len--;
    }
    printf("%d\n",len);
    system("pause");
    return 0;
}
