#include<stdio.h>
void main()
{
  int a[3][3];
  int i,j;

  for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    {
        printf("Enter the Elements at row[%d] and coloums[%d] : ",i,j);
        scanf("%d \n",&a[i][j]);
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

 




}