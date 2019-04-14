#include <stdio.h>
#include <stdlib.h>

void reverse ()
{
	char text;
	scanf("%c", &text);
    if(text!='\n')
    {
        reverse();
		printf("%c", text);
    }
}
int main()
{
    int length;
    reverse();
	system("pause");
    return 0;
}
