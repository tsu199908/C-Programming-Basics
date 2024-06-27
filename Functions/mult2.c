#include<stdio.h>

int mult(int x,int y);
int mult(int x,int y)

{
   int z;

   z = x*y;
   return z;


}

int main()
{
    int m;

    m = mult(30,10);

    printf("%d",m);
}