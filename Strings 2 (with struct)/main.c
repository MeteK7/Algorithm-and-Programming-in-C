/*Write a C program to store information of 100 books using a structure.
You should create a structure (Books) to contain name, price and number of pages of each book as its data member.
If the number of pages is more than 1000 pages then 25% extra should be added to price.
At the end, print all the information.*/

#include <stdio.h>
#include <stdlib.h>

struct Books
{
    char name[10];
    int pages;
    float price;
}book[100];

int main ()
{
    int i;


    for(i=0;i<3;i++)
    {
        scanf("%s",book[i].name);
        scanf("%d",&book[i].pages);
        scanf("%f",&book[i].price);

        if (book[i].pages>1000)
        book[i].price+=book[i].price*0.25;
    }

    for(i=0;i<3;i++)
    {
        printf("%d. Book's name= %s\n",i+1,book[i].name);
        printf("%d. Book's pages= %d\n",i+1,book[i].pages);
        printf("%d. Book's price= %.2f\n",i+1,book[i].price);
    }
    return 0;
}
