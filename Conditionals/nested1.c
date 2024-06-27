#include<stdio.h>

void main()

{
  int age,wt,pulse;

  printf("Enter the age : ");
  scanf("%d",&age);

  

  if(age>=18)
  {    
    printf("Enter the Weight : ");
    scanf("%d",&wt);
    
     if(wt>=50)
     {
        printf("Enter the Pulse Rate : ");
        scanf("%d",&pulse);

        if(pulse>=50 && pulse<=100)
        {
         printf("Eligible to Donate ");
        }

        else
        {
         printf("Not Eligible to Donate ");
         }
      }

     else
     { printf("Not Eligible to Donate");

     }

  }

     else
     {
        printf("Not Eligible to Vote");

     }

  }



