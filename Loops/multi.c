#include<stdio.h>
void main()

{
  int n,mult;
  printf("Enter the number : ");
  scanf("%d",&n);

  for (int i = 1; i <=10; i++)
  {
    mult = n*i;
   printf("%d*%d = %d\n",n,i,mult);
     
  }
  

}