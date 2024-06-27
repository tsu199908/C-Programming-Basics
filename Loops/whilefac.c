#include<stdio.h>
void main()

{
   int fact=1;
   int n;

   printf("Enter the Number : ");
   scanf("%d",&n);

   int i=1;
   while(i<=n)
   {
     fact=fact*i;
     i++;
   
   }

printf("Factorial of the Number %d is : %d",n,fact);

}