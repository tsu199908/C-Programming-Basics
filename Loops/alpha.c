#include<stdio.h>
void main()
{
   int i,j;
   char a;
    printf("Enter the Character : ");
    scanf("%c",&a);

    for(i='A';i<=a;i++)
    {
        for(j='A';j<=i;j++)
        {
        printf("%c",j);
        }

        printf("\n");

    }

    

}