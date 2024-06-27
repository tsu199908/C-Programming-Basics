#include<stdio.h>

void swap(int a, int b);
void swap(int a, int b)
{
  int t;
  t=a;
  a=b;
  b=t;
  printf("Calling Function is a = %d , b = %d ",a,b);

}

void main()
{
  int a,b;
  printf("Enter the Value of a and b : ");
  scanf("%d %d",&a,&b);
  swap(a,b);
  printf("Main Function is a = %d and b = %d ",a,b);


}