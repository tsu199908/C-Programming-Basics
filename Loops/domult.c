#include<stdio.h>
void main()
{
  int num;
  printf("Enter the Number : ");
  scanf("%d",&num);
int mult;
  int i=1;
  while(i<=10)
  {
    mult=num*i;
    printf("%d * %d = %d\n",num,i,mult);
i++;
  }


}