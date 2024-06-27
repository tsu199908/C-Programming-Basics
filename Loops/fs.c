#include<stdio.h>
void main()

{
  int a=0,b=1;
  int num,nt=a+b,i;

  printf("Enter The Number :");
  scanf("%d",&num);

  printf("Fibonacci Series :\n%d\n%d\n",a,b);

  for(i=3;i<=num;i++)
  {
    //printf("%d\n",nt);
    a=b;
    b=nt;
    nt = a+b;
  }

  printf("%d\n",nt);



}