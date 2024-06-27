#include<stdio.h>
void main()
{
   int a[4],i,j;
   

   for(i=0;i<=3;i++)
   {
      printf("Enter the %d Element =  ",i);
      scanf("%d",&a[i]);
   }
   for(j=0;j<=3;j++)
   {
    printf("Number of Elements of a[%d] is  = %d \n",j,a[j]);
   }


   }
  

