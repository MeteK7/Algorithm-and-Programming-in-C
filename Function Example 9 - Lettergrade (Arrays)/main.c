#include <stdio.h>
#include <stdlib.h>

char lettergrade(double grade[],int n)
{
    int i;
    char ch;


    if (grade[n] >= 90)

        ch='AA';

	else if (85 <= grade[n] && grade[n] <= 89)

        ch='BA';

	else if (80 <= grade[n] && grade[n] <= 84)

        ch='BB';

	else if (75 <= grade[n] && grade[n] <= 79)

        ch='CB';

	else if (65 <= grade[n] && grade[n] <= 74)

        ch='CC';

	else if (60 <= grade[n] && grade[n] <= 64)

        ch='DC';

	else if (55 <= grade[n] && grade[n] <= 59)

        ch='DD';

	else if (50 <= grade[n] && grade[n] <= 54)

        ch='FD';

	else
{
    ch='FF';
    printf("%c\n",ch);
}


	return ch;

}
int main ()
{
    double mid,fin,grade[2];
    int i;
    for(i=0;i<2;i++)
    {
        scanf("%lf %lf",&mid,&fin);
        grade[i]=mid*30+fin*70;
        printf("%d",i);

        printf("The %d. student's lettergrade: %c\n\n",i+1,lettergrade(grade,i));
}
    system("pause");
    return 0;
}
