#include<stdio.h>
void main()

{
float phy,chem,maths;
float total,percentage;

printf("Enter the Physics Marks:");
scanf("%f",&phy);

printf("Enter the Chemistry Marks: ");
scanf("%f",&chem);

printf("Enter the Maths Marks : ");
scanf("%f",&chem);

total = phy + chem + maths;
percentage = total/300*100;

printf("Total Marks is : %f\n",total);
printf("Obtained Percentage is : %f\n",percentage);


}