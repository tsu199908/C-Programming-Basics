#include <stdio.h>

struct add
{
    int x,y,sum;
};

void main()
{
struct add s;

printf("Enter the First Number = ");
scanf("%d",&s.x);

printf("Enter the Second Number = ");
scanf("%d",&s.y);

s.sum = s.x + s.y;

printf("Addition of Numeber is  = %d",s.sum);
}
