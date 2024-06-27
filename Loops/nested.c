#include<stdio.h>
void main()

{
  int i,j;
  int count=1;

  int k;
  printf("Enter the Number of Rows : ");
  scanf("%d",&k);

 
  for(i=1;i<=k;i++)

  {

    for(j=1;j<=i;j++)
    {
    printf("%d",count);
    count++;
   
  }
  
   printf("\n");
  }


}