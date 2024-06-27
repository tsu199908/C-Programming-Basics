#include<stdio.h>
void main()
{
  int a[50];
  int i;
  int sum=0;
  int n;

  printf("Enter how many do you want : ");
  scanf("%d",&n);

  

  for(i=0;i<=n;i++)
  {
    printf("Now Enter the %d Number  :  ",i);
    scanf("%d",&a[i]);
    sum = sum +  a[i];
  }
  printf("Total sum is : %d",sum);


}