#include<stdio.h>
void main()

{
  int n;
  printf("Enter the Number : ");
  scanf("%d",&n);

  printf("Factorial of Number %d is : ",n);

  int i = 1;
  do{
      if(n%i == 0)
      
      printf("%d ",i);
      i++;

    
  }
while(i<=n);

}