#include<stdio.h>

int sub();
int sub()
{
  int a=10,b=20,c;
  c = b-a;

  return c;

}

    int main()
    {
        int rs = sub();
        printf("%d",rs);
       
    }
