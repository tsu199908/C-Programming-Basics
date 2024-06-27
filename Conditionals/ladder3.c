#include<stdio.h>
void main()

{
    int sp,cp,amount;

    printf("Enter the Selling Price : ");
    scanf("%d",&sp);

    printf("Enter the Cost Price : ");
    scanf("%d",&cp);

    if(sp>cp)
    {
        amount = sp-cp;
    printf("Profit : %d",amount);
    }

    else if(cp>sp)
    {
        amount = cp-sp;
        printf("Loss : %d",amount);
    }


else{
    printf("No Profit and No Loss");
}


}