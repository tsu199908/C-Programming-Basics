#include<stdio.h>

int mult(int x,int y);
int mult(int x,int y)

{
   int z;

   z = x * y;
   return z;
}

int main()
{
  int rs = mult(30,50);
  printf("Multiplication  = %d",rs);
  return 0;

}