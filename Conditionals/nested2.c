#include<stdio.h>
void main()

{
  int num1,num2;

  printf("Enter the Both Numbers : ");
  scanf("%d %d",&num1,&num2);

  if(num1>=num2)
{
    if(num1==num2)
    {
        printf("Both Numbers are Equal ",num1,num2);
    }
    else
    {
      printf("%d is greater than %d  ",num1,num2);
    }
}

else
{
    printf("%d is less than %d  ",num1,num2);

}

}