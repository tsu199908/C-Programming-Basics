#include<stdio.h>

float temp(float t);

int main()
{
int t;
printf("Enter the Temperature in Celcius : ");
scanf("%d",&t);

float f;
f = temp(t);

printf("Temperature in Farheneight is : %f",f);

}

float temp(float t)
{
  
  float c;
  c = (t*9.0/5.0)+32;
  return c;

}