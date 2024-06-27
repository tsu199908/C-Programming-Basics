#include<stdio.h>

int sum(int x,int y);

int main()
{
    int x,y;
    printf("Enter the Number to Add : ");
    scanf("%d %d",&x,&y);
    
   // int s;
    
    //s = sum(x,y);
    //printf("Sum is  = %d ",s);
    sum(x,y);


}

int sum(int x,int y)
{
    int s;
    s = x+y;
    printf("%d",s);
    return 0;
}


