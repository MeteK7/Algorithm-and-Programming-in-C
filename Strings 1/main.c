#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[5];
    scanf("%s",text);
    for(int i=0;i<5;i++)
    {
        printf("%c",text[i]);
    }
	system("pause");
	return 0;
}
