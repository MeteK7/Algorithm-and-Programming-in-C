#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
	char word[100];
	int length;
	int n;
	int counter = 0, counter1 = 0;
	char letter;

	gets(word);

	length = strlen(word);

	for (n = 0; n < length; n++)
	{
		letter = word[n];

		if (letter >= 'a' && letter <= 'z')
			letter = letter - 32;

		if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
			counter++;

		if (letter != 'A' && letter != 'E' && letter != 'I' && letter != 'O' && letter != 'U' && letter !=' ')
			counter1++;
	}
	printf("%d vowel, %d consonant\n", counter, counter1);
	system("pause");
}
