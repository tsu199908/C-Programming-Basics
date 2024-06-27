#include<stdio.h>

struct add
{
   int x,y,sum;

};

void main()
{

struct add s1;

s1.x = 10;
s1.y = 20;

s1.sum = s1.x + s1.y;

printf("Addition is  = %d",s1.sum);

}
