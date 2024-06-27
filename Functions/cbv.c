#include<stdio.h>
void add(int m);
void add(int m)

{

    m = m+10;
}
int main()
{
    int x = 10;
    printf("Before Calling  = %d\n",x);
    add(x);
    printf("After Calling = %d\n",x);
    return 0;
}