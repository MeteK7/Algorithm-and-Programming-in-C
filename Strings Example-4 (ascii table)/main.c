#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch=0;
    int i=0;
    for(i;i<=127;i++)
    {
        printf("%d %c\n",ch,ch);
        ch++;
    }
    system("pause");
    return 0;
}
