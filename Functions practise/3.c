#include<stdio.h>

int table(int n);

int main()
{
  int n;
  printf("Enter the Number : ");
  scanf("%d",&n);

  table(n);
  return 0;


}

int table(int n)
{
    int i;
    int mult;
    for(i=1;i<=10;i++)
    {
        mult = n*i;
        printf("%d * %d = %d\n",n,i,mult);
    }
}
