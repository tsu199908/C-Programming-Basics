#include<stdio.h>
void main()
{
  int a[3][3];
  int b[3][3];
  int c[3][3];

  int i,j;

  for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    {
    printf("Enter the Elements ",i,j);
    scanf("%d ",&a[i][j]);
    }
  }

  for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    {
    printf("%d ",a[i][j]); 
  }
  printf("\n");
  }

   for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    {
    printf("%d ",b[i][j]);
  }
  printf("\n");
  }

    for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    printf("Enter the Elements ",i,j);
    scanf("%d ",&b[i][j]);
  }

  printf("Addition of First and Second Array is \n");
  for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    {
        c[i][j] = a[i][j] + b[i][j];
        printf("%d ",c[i][j]);
    }

    printf("\n");

  }


}