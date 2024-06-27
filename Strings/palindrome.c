#include<stdio.h>
#include<string.h>
void main()
{
   char a[200];
   char rev[200];
   printf("Enter the String : ");
   scanf("%s",&a);

   strcpy(rev,a);
   strrev(rev);

   if(strcmp(a,rev)==0)
   {
    printf("%s is palindrome ");
   }
   else
   {
    printf("It is not Palindrome ");
   }



}