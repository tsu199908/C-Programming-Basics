#include<stdio.h>
void main()
{
    int n;
    int i;
    int sum = 0;
    int j;

    printf("Enter the Number : ");
    scanf("%d",&n);

    printf("Odd Numbers are : ");
    

    

    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
        printf(" %d ",i);
        
        
        }
    }

        printf("\nSum of Only Odd Numbers are : ");

     for(j=1;j<=n;j++)
     {
        if(j%2!=0)
        {
            sum = sum + j;
        }

        
     } 
     printf("%d",sum);  
    }


        

        

        
 