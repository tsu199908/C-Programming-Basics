#include<stdio.h>
void main()

{
  int n,i;
  printf("Enter The Number :");
  scanf("%d",&n);
  printf("Factors of given Number is : ");
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    
      printf("%d ",i);
    
  }
   
}