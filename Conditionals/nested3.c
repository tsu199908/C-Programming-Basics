#include<stdio.h>
void main()

{
  int num;

  printf("Enter the Number : ");
  scanf("%d",&num);

  if(num<=10)
{
    if(num==1)
    {
        printf("Value is 1");
    }
    else
    {
      printf("Number is Greater than 1 but less than 10");
    }
}

else
{
    printf("Number is greater than 10");

}

}