#include<stdio.h>

float per(float x,float y,float z);

int main()
{
int x,y,z;
printf("Enter the Marks Obtained in Maths : ");
scanf("%d",&x);

printf("Enter the Marks Obtained in Scinece : ");
scanf("%d",&y);

printf("Enter the Marks Obtained in Sanskrit : ");
scanf("%d",&z);

int a;
a = per(x,y,z);
printf("Total Percentage is  = %d",a);

} 

float per(float x,float y,float z)
{
    float perc;
    perc = ((x+y+z)/300)*100;
    return perc;
}