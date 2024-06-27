#include<stdio.h>

void sub();
void sub()
{ 
  int a,b;
  int c;

  printf("Enter the Elements : ");
  scanf("%d %d",&a,&b);

  c = b-a;

  printf("Subtraction is =  %d ",c);

}

void main()
{

    sub();
}