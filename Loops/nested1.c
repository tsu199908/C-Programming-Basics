#include<stdio.h>
void main()
{
  int i,j;
  int k;

  printf("Entr the Number : ");
  scanf("%d",&k);

  for(i=0;i<=k;i++)
  {
    for(j=i;j<=k;j++)
    {
    printf(" ");
    }
    for(j=0;j<=i;j++)
    {
        printf("*");
    }

    for(j=0;j<=i;j++)
    {
        printf("*");
    }

    printf("\n");
  }

}