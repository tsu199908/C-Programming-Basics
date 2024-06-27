#include<stdio.h>
void main()

{
    int a,b,c;

    printf("Enter the Sides of a traingle : ");
    scanf("%d %d %d",&a,&b,&c);

    if(a ==b && b ==c && a==c)
    {
    printf("It is an Equilateral Traingle",a,b,c);
    }

    else if(a ==b || b == c || a ==c)
    {
        printf("It is an Isoscelous Triangle",a,b,c);
    }


else{
    printf("It is a Scalar Traingle",a,b,c);
}


}