#include<stdio.h>
void main()
{
  int a = 10;
  int *p;

  p = &a;

  printf("Value of a = %d \n",a);
  printf("Address of a is  = %d \n",&a);

  printf("Value of p = %d \n",p);
  printf("Address of p is  = %d \n",&p);
  printf("Value of *p is = %d \n",*p);


}