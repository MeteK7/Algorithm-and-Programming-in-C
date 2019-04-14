#include <stdio.h>
#include <stdlib.h>

int main()	// This program finds whether the letter that you write is vowel or consonant.
{
for(;;)
{

	char letter;

			printf("\nVowel-Consonant Letter Finder. ( 1 for exit. )\n");
			scanf("%c", &letter);
			if (letter == '1')
			{
				return 0;
			}
            switch (letter)
            {
                case 'A': case 'E': case 'I': case 'U': case 'O': case 'a': case 'e': case 'i': case 'u': case 'o': printf("%c is a vowel letter.\n",letter);
                break;
                default:printf("%c is a constant letter.\n",letter);
                break;
            }
            scanf("%c", &letter);
}
	system("pause");
	return 0;
}
