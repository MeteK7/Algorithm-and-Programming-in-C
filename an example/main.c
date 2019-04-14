#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[50],s2[50];
    int length1,length2;
    gets(s1);
    gets(s2);
    length1=strlen(s1);
    length2=strlen(s2);
    if(length2<length1)
    {
        strcpy(s1,s2);
    }
    else
    {
        strcat(s1,s2);
    }
    printf("%s %s",s1,s2);
    return 0;
}
