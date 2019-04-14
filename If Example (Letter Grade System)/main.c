#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int midtermp, finalp, average;
	char lesson[200];
	printf("Please choose a lesson you want to find its average.\n\n");
	printf("Physics, Mathematics, English, Programming or what?\n");
	scanf("%s", &lesson);
	printf("\nWhat is the midterm and final marks of your %s lesson?\n",lesson);
	printf("Midterm: ");
	scanf("%d", &midtermp);
	printf("Final: ");
	scanf("%d",&finalp);
	average = (midtermp + finalp) / 2;
	if (average >= 90) {
		printf("The average of %s: %d (AA)\n\n   ---Congratulations! You are a very hardworking person!---\n\n", lesson, average);
	}
	else if (85 <= average && average <= 89) {
		printf("The average of %s: %d (BA)\n", lesson, average);

	}
	else if (80 <= average && average <= 84) {
		printf("The average of %s: %d (BB)\n", lesson, average);

	}
	else if (75 <= average && average <= 79) {
		printf("The average of %s: %d (CB)\n", lesson, average);

	}
	else if (65 <= average && average <= 74) {
		printf("The average of %s: %d (CC)\n", lesson, average);

	}
	else if (60 <= average && average <= 64) {
		printf("The average of %s: %d (DC)\n", lesson, average);

	}
	else if (55 <= average && average <= 59) {
		printf("The average of %s: %d (DD)\n", lesson, average);

	}
	else if (50 <= average && average <= 54) {
		printf("The average of %s: %d (FD)\n Ooh! I`m so sorry. You could not pass the lesson :(", lesson, average);

	}
	else {
		printf("The average of %s: %d (FF)\n Ooh! I`m so sorry. You could not pass the lesson :(\n", lesson, average);
	}
	system("pause");
	return 0;
}
