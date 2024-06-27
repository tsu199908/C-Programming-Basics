#include<stdio.h>
#include<math.h>
void main()

{
int a,b;
int sum,sub,div,mult,modulus;

printf("Enter the number : ");
scanf("%d %d",&a,&b);

sum = a+b;
sub = b-a;
div = b/a;
mult = a*b;
modulus = b%a;


printf("Addition will be  : %d\n",sum );
printf("Subtraction will be: %d\n",sub);
printf("Division will be : %d\n",div);
printf("Multiplication will be : %d\n", mult);
printf("Modulus will be: %d\n",modulus);

}