#include <stdio.h>
#include <stdlib.h>

int main (){

int number,i,j,temp,counter=1,counteri=1;

scanf("%d",&number);

temp=number-2;

for(i=2;i<=number/2;i++)
{
    for(j=2;j<i;j++){
        if(i%j==0){
            counteri=0;
            break;
        }
    }

    for(j=2;j<temp;j++){
        if(temp%j==0){
            counter=0;
            break;
        }
    }
    if(counteri==1 && counter==1)
        printf("%d= %d+%d\n",number,i,temp);
    temp--;
    counteri=1;
    counter=1;
}

system("pause");
return 0;

}
