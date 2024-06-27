#include<stdio.h>
void main()
{
  int fact=1;
  int num;

  printf("Enter the Number : ");
  scanf("%d",&num);

  int i = 1;
  do{
     
     
     fact = fact*i;
     i++;

  }
   
    while(i<=num);
    printf("Factorial is = %d ",fact);


}