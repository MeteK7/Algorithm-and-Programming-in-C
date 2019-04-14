#include <stdio.h>
#include <stdlib.h>

void reverse (char name[][10],int number)
{
    if (number<5)
    {
        reverse(name,(number+1));
        puts(name[number]);
    }
}
int main()
{
    int number=0;
    char name[5][10];
    for(int i=0;i<5;i++)
    {
        gets(name[i]);
    }
    reverse(name,number);
    system("pause");
    return 0;
}
