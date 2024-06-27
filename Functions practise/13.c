#include <stdio.h>

int trib(int n);


int main()
{ int n;
   
   printf("Enter The Number in Sequence = ");
   scanf("%d",&n);

   int j;
   j = trib(n);

   printf("Tribonacci Sequence is : %d",j);
  
   return 0;

}

int trib(int n)
{
  if(n==1 || n==2)
  {
    return 0;
  }

 if(n==3)
  {
    return 1;
  }
  int tribNm1 = trib(n-1);
  int tribNm2 = trib(n-1)+trib(n-2);
  int tribNm3 = trib(n-1)+trib(n-2)+trib(n-3);

  
    return tribNm3;
}

   
  
 



