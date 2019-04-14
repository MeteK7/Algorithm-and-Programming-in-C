#include <stdio.h>
#include <stdlib.h>

int main()
{
	int edge1, edge2, edge3;
	printf("The length of first edge: ");
	scanf("%d", &edge1);
	printf("The length of second edge: ");
	scanf("%d", &edge2);
	printf("The length of third edge: ");
	scanf("%d", &edge3);
	if (edge1 == edge2 && edge2 == edge3)
	{
		printf("\nAll edges are equal.\n");
		printf("This is an equilateral triangle.\n\n");
	}
	else if (edge1 == edge2 || edge2 == edge3 || edge1 == edge3)
	{
		printf("\nTwo edges are equal.\n");
		printf("This is an isosceles triangle.\n\n");
	}
	else
	{
		printf("\nEdges are not equal.\n");
		printf("This is a scalene triangle.\n\n");
	}

	system("pause");
	return 0;
}
