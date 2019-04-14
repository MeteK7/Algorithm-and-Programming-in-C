#include <stdio.h>
#include <stdlib.h>

int main()		//This program wants you to enter lab, midterm and final exam grade of students. Then, it finds and prints total grade of each students and the whole of class.
				//Also, it can find and print the average total grade of the class. It adds 10 bonus to total grade of each students if the average total grade of the class is less then 50.
{
	int lab[100], midterm[100], fin[100], totalgrade[100], average = 0,classsize;
	printf("What is the class size?\n");
	scanf("%d", &classsize);
	for (int i = 0; i < classsize; i++)// You can define integer numbers in expression parentheses, you do not have to define it just in one line like above.
	{

		printf("\n%d. student's laboratory exam grade: ", i+1);
		scanf("%d", &lab[i]);
		printf("%d. student's midterm exam grade: ", i + 1);
		scanf("%d", &midterm[i]);
		printf("%d. student's final exam grade: ", i + 1);
		scanf("%d", &fin[i]);
		totalgrade[i] = 0.15*lab[i] + 0.35*midterm[i] + 0.5*fin[i];
		printf("\n>>> %d. student's total grade: %d\n", i + 1, totalgrade[i]);
		average += totalgrade[i];
	}
	average /= classsize;
	printf("\n>> The average total grade of the class: %d <<\n\n", average);
	if (average < 50)
	{
		printf("When the average total grade of the class is less then 50, we add 10 bonus to each students.\n\n");

		for (int i = 0; i < classsize; i++)
		{
			totalgrade[i] += 10;
			printf("%d. student's total grade with 10 bonus: %d\n", i + 1, totalgrade[i]);
		}
	}
	else
	{
		printf(">> No need for bonus. <<\n\n");
		for (int k = 0; k < classsize; k++)
		{
			printf("%d. student's total grade: %d\n", k + 1, totalgrade[k]);
		}
	}
	printf("\n");

	system("pause");
	return 0;
}
