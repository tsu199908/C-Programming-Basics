#include<stdio.h>
#include<math.h>

int square(int n);
float circle(float j);
int rectangle(int k, int l);

int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);

  int sq,ci,re;

  sq = square(n);
  ci = circle(n);
  //re = rectangle(n);

  printf("Area of Square is = %d\n",sq);
  printf("Area of Circle is = %f\n",ci);
  //printf("Area of Rectangle is = %d\n",re);

  return 0;


}

int square(int n)
{
   return n*n;
}

float circle(float j)
{
    return 3.14*j*j;
}

int rectangle(int k,int l)
{
    return k*l;
}