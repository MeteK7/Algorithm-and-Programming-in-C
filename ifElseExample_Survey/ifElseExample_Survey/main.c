#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int coff = 0, tea=0, coke=0, orJuice=0, choice, person=0;

	printf("\n\t 1.Coffee\t \t2.Tea\t \t3.Coke\t \t4.Orange Juice\n\n");

	do{

		person++;

		printf("Please input the favorite baverage of person #%d: Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program: ", person);

		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			coff++;
			break;
		case 2:
			tea++;
			break;
		case 3:
			coke++;
			break;
		case 4:
			orJuice++;
			break;
		case -1:
			person--;
			break;
		default:
			person--;
			printf("\n\n!!!Enter a valid number of choice!!!\n\n");
			break;
		}

	} while (choice != -1);

	printf("\nThe total number of people surveyed is %d. The results are as follows:\n\n", person);

	printf("Baverage\t\tNumber of Votes\n");
	printf("***********************************\n\n");
	printf(" Coffee \t\t\t%d\n Tea \t\t\t\t%d\n Coke \t\t\t\t%d\n Orange Juice \t\t\t%d\n\n", coff, tea, coke, orJuice);

	system("pause");
	return 0;
}