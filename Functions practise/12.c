#include <stdio.h>

int fib(int x);

int main()
{
    int x;
    printf("Enter the Number in Sequence : ");
    scanf("%d",&x);

    int j  = fib(x);

    printf("Sequence is  = %d",j);

    return 0;

}

int fib(int x)
{
    if(x==0)
    {
        return 0;
    }

    if(x==1)
    {
        return 1;
    }
    int fibNm1 = fib(x-1);
    int fibNm2 = fib(x-1)+fib(x-2);

    

   return fibNm2;
}