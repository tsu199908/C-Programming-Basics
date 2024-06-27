#include<stdio.h>
void main()
{
    int n;

    int i;
    int cube;
    printf("Enter the Number : ");
    scanf("%d",&n);

    //printf("Cube of Numbers are : ");

    for(i=1;i<=n;i++)
    {
        cube = i*i*i;
        printf("Cube of %d is = %d\n ",i,cube);
    }
}