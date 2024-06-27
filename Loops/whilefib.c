#include<stdio.h>
void main()
{
  int n;
  int fib;

  printf("Enter The Number in Terms : ");
  scanf("%d",&n);

  int i=0;
  while(i<=n)
  {
   int fib1;
   int fib2;

   fib = fib1(n-1)+fib2(n-2);
   printf("Fibonacci Series is = %d",fib);
   i++

  }


}