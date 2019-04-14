#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	char myst[100];
	gets(myst);
	for (i = 0; myst[i] != '\0'; i++)
	{
		while (!((myst[i] >= 65 && myst[i] <= 90) || (myst[i] >= 97 && myst[i] <= 122) || myst[i] == '\0'))
		{
			for (j = i; myst[j] != '\0'; j++)
			{
				myst[j] = myst[j + 1];
			}
		}
	}
	puts(myst);
	system("pause");
	return 0;
}
