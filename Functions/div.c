#include<stdio.h>
void div();
void div()
{
    int a,b,c;
    
    printf("Enter the Elements : ");
    scanf("%d %d",&a,&b);

    c = b/a;

    printf("Division is  = %d",c);
}

void main()
{
    div();
}