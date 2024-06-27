#include<stdio.h>

void printHello(int h);

void main()
{
int h;
printf("Enter the Number : ");
scanf("%d",&h);

printHello(h);




}

void printHello(int h)
{
   if(h==0)
   {
    return ;
   }
   printf("Hello World\n");
   printHello(h-1);

}