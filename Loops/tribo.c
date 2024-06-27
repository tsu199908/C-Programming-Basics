#include<stdio.h>

void main()
{
  int a=0,b=0,c=1;
  int d;
  int i;
  int n;

  printf("Enter The Number = ");
  scanf("%d",&n);

  printf("Tribonacci Sequence is : ");

  for(i=1;i<=n;i++)
  {
    
    d = a+b+c;
    printf(" %d ",d);
    a = b;
    b = c;
    c = d;
  }
  


}