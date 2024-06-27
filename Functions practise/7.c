#include<stdio.h>
int sum(int i);

void main()
{
int i;
printf("Enter the Number : ");
scanf("%d",&i);

int j;
j = sum(i);

printf("Sum is %d",j);

}

int sum(int i)
{
    
if(i==1)
{
    return 1;
}

int sumNm1 = sum(i-1);
int sumNm = sum(i-1)+i;
return sumNm;
}