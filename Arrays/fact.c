#include<stdio.h>
void main()
{
  int a[100];
  int n,i,j;
  int fact = 1;

  printf("Enter the Number of Elements : ");
  scanf("%d",&n);

  for(i=0;i<=n;i++)
  {
    printf("Enter the %d element : ",i);
    scanf("%d",&a[i]);
   
  }
 
  for(j=1;j<=n;j++)
  {
    fact = fact*j;
    printf(" Factorials of a[%d] is : %d\n",j,fact);
  }
  

}