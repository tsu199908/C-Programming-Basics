#include<stdio.h>

void swap(int *a, int *b, int *c);
void swap(int *a, int *b, int *c)
{

int t;
t = *a;
*a = *b;
*b = *c;
*c = t;

printf("Calling Function Value of a = %d and b = %d and c = %d\n",a,b,c);


}

void main()

{

   int a,b,c;
    printf("Enter the value of a and b and c : ");
    scanf("%d %d %d",&a,&b,&c);
    swap(&a,&b,&c);
    printf("Main Function Value of a = %d and b = %d and c = %d\n",a,b,c);
}