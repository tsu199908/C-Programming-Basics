#include<stdio.h>
void main()

{ 
    int i;
    int j;
    int n;

    printf("Enter the number of Rows : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)

    {
        for(j=i;j>=1;j--)
        {
        printf("* ");
        }
        printf("\n");

   }





}