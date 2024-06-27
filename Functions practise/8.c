#include<stdio.h>
int fact(int i);

void main()
{
int i;
printf("Enter the Number : ");
scanf("%d",&i);

int j;
j = fact(i);

printf("Factorial is =  %d",j);

}

int fact(int i)
{
    
if(i==0)
{
    return 1;
}

int factNm1 = fact(i-1);
int factNm = fact(i-1)*i;
return factNm;
}