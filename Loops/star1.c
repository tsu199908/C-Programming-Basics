#include<stdio.h>
void main()
{
  int n;
  printf("Enter the Number : ");
  scanf("%d",&n);

  for(int i = n; i>=1; i--)
  {
    for(int j = 1 ; j<=i ;j++)
    {
    printf("*",j);
  }


  printf("\n");
  }

}