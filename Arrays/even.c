#include<stdio.h>
void main()
{
  int a[100];
  int i,n;

  printf("Enter the Number of Elements : ");
  scanf("%d",&n);

  for(i=0;i<=n;i++)
  {
    printf("Enter the %d element : ",i);
    scanf("%d",&a[i]);
  }
  
for(i=0;i<=n;i++)
{
    if(a[i]%2==0)
   {
     printf("Even Elements are : %d\n",a[i]);
   }
}
 for(i=0;i<=n;i++)
 {
   if(a[i]%2!=0)
    {
    printf("Odd Elements are : %d\n",a[i]);
  }

  }

}
