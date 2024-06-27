#include<stdio.h>

void mult();
void mult()

{  
    int a,b;
    int c;

    printf("Enter the Elements : ");
    scanf("%d %d ",&a,&b);

    c = a*b;
    printf("Multiplication is  = %d",c);



}

void main()
{
    mult();
}