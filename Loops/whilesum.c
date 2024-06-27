#include<stdio.h>
void main()

{  
  int sum = 0;
  int n;

  printf("Enter the Number : ");
  scanf("%d",&n);

  

  int i = 1;
  while(i<=n)
  {
    
    sum=sum+i;
    i++;
    


  }
 
 printf("Sum is  = %d",sum);

}