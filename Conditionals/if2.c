#include<stdio.h>
void main()

{
int a,b,c;
printf("Enter the Number: ");
scanf("%d %d %d",&a,&b,&c);

if(a>b && a>c)
{
    printf("1st Number is Largest",a);
}
    if(b>a && b>c)
    {
        printf("2nd Number is Largest",b);
    }

    if(c>a && c>b)
    {
printf("3rd Number is Largest",c);

    }

}

