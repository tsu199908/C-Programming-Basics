#include<stdio.h>
void main()
{
    int n;
    int i;j;

    printf("Enter the Number you want : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n;j<i;j--)
        printf(" ");
        
        for(int k=1;k<i;k++)
        printf("* ");
        printf("\n");
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<i;j++)
        printf(" ");
        
        for(int k = n; k<i;k-- )
    }
    printf("*");
    printf("\n");
}

