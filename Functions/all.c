#include<stdio.h>

void add();
void add()
{
  int a,b;
  int c;

  printf("Enter the Elements to Add = ");
  scanf("%d %d",&a,&b);

  c = a+b;
  printf("Addition is  = %d\n",c);

}

void sub();
void sub()
{
int a,b;
  int c;

  c = b-a;
  printf("Enter the Elements to Subtract = ");
  scanf("%d %d",&a,&b);
  printf("Subtraction is  = %d\n",c);


}

void mult();
void mult()

{
    int a,b;
  int c;

  c = a*b;
  printf("Enter the Elements to Multiply = ");
  scanf("%d %d",&a,&b);
  printf("Multiplication is  = %d\n",c);
}

void div();
void div()

{
    int a,b;
  int c;

  c = b/a;
  printf("Enter the Elements to Divide = ");
  scanf("%d %d",&a,&b);
  printf("Division is  = %d\n",c);
}

void main()
{

    add(); sub(); mult(); div();
}


