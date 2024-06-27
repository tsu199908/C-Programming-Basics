#include<stdio.h>

int sub(int x,int y);
int sub(int x, int y)
{
  int z;

  z = y-x;
  return z;

}

int main()
{
  int rs = sub(20,5000);

  printf("Subtraction is = %d",rs);


}