#include<stdio.h>
void main()
{
  int i,j;
  char a;

  printf("Enter the Character : ");
  scanf("%c",&a);

  for(i=a;i>='A';i--)
  {
    for(j='A';j<=i;j++)
    {
    printf("%c",i);
  }

  printf("\n");
  }


}