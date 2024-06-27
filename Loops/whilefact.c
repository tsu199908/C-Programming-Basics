#include<stdio.h>
void main()
{
  int n;
  printf("Enter the Number : ");
  scanf("%d",&n);

  printf("Factorial of %d is  =  ",n);
  int i=1;
  while(i<=n)
  {
     if(n%i==0)
     printf("%d ",i);
     i++;


  }


}