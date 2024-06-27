#include<stdio.h>

int mult();
int mult()
{
  int x=20,y=10;
  int z;

  z = x*y;
  return z;

}

int main()
{
    int rs = mult();
    printf("Multiplication = %d",rs);
    return 0;
}