#include<stdio.h>
#include<string.h>
void main()
{
   char a1[200];
   printf("Enter the Mobile Number : ");
   scanf("%s ",&a1);

   if(strlen(a1)==10)
   {
    printf("Mobile Number is Valid ",a1);
   }
   else
   {
   printf("Mobile Number is Not Valid ",a1);
}


}