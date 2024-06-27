#include<stdio.h>
void main()

{
  int a=0,b=1;
  int c,i,num;

  printf("Enter The Number : ");
  scanf("%d",&num);

  printf("Fibonacci Series is : ");

i=0;
do{
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
    i++;
}
  
while(i<=num);



}