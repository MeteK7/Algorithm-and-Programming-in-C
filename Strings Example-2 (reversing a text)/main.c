#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;
    char text[100];

    gets(text);

    for(i=strlen(text)-1;i>=0;i--)
    {
        putchar(text[i]);
    }

    system("pause");
    return 0;
}
