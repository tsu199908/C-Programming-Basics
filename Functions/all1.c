#include<stdio.h>

void add();
void add()
void sub();
void sub()
void mult();
void mult()
void div();
void div()


{
  int a=10,b=20;
  int add,sub,mult,div;

  add = a + b;
  sub = b-a;
  mult = a*b;
  div = b/a;

  printf("Addition is  = %d\n",add);
  printf("Subtraction is  = %d\n",sub);
  printf("Multiplication is  = %d\n",mult);
  printf("Division is  = %d\n",div);

}

void main()
{
    add();sub();mult();div();
}
