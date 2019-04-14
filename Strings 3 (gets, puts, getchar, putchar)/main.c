#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char text[100],name[20],choice;

    printf("Enter your name: ");

    gets(name);

    printf("Hi %s! I am Luna. How can I help you with?\n",name);
    printf("a: reversing a text\n");

    choice=getchar();

    if (choice=='a')
    {
        gets(text);

        for(i=strlen(text)-1;i>=0;i--)
        {
            putchar(text[i]);
        }
    }
    system("pause");
    return 0;
}
