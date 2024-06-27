#include<stdio.h>

int temp(int n);
void main()
{
int n;
printf("Enter the Temperature in Celcius : ");
scanf("%d",&n);

temp(n);



}

int temp(int n)
{
    if(n>=35)
    {
        printf("HOT",n);

    }

    else
    {
        printf("COLD",n);
    }

    return n;
}