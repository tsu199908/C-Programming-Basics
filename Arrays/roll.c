#include<stdio.h>
void main()
{ 
    int roll[10] = {89,45,1,65,4,61,8,74,55,46};
    int r,j,m=0;

   /* printf("Roll Number \n ");
    for(i=0;i<=9;i++)
    {
        printf("%d",roll[i]);
    }
    */

    printf("Enter your Roll Number : ");
    scanf("%d",&r);

    for(j=0;j<=9;j++)
    {
        if(r==roll[j])
        {
        printf("Roll Number is Found at position = %d ",j);
        m=1;
        
        }
    }
    

        if(m==0)
        {
        printf("Not Found");
        }

    }

    
    
 


