#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reversename(char name[], int length)
{
	int i, j=1;
	char tmp;
	for (i = 0; i < (length/2); i++)
	{
		tmp = name[i];
		name[i]= name[length - j];
		name[length - j] = tmp;
		j++;
	}
}
int main()
{
	char name[100];
	int length;
	gets(name);
	length = strlen(name);
	reversename(name, length);
	printf("%s\n", name);
	system("pause");
	return 0;
}
