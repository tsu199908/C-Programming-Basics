#include <stdio.h>

struct all
{
    int x,y,z,r,sum,sub,mult,div;
    int rectangle,square;
    float circle;
    float pi;
};

void main()
{ 
    struct all s1,s2;

    printf("Enter the First Number = ");
    scanf("%d",&s1.x);

    printf("Enter the Second Number = ");
    scanf("%d",&s1.y);

    s1.sum = s1.x + s1.y;
    s1.sub = s1.y - s1.x;
    s1.mult = s1.x * s1.y;
    s1.div = s1.x/s1.y;

    printf("Addition of Number is  = %d\n",s1.sum);
    printf("Subtraction of Number is  = %d\n",s1.sub);
    printf("Multiplication of Number is = %d\n",s1.mult);
    printf("Division of Number is = %d\n",s1.div);

    printf("Enter the Length : ");
    scanf("%d",&s2.x);

    printf("Enter the Breadth : ");
    scanf("%d",&s2.y);

    printf("Enter the Side : ");
    scanf("%d",&s2.z);

    s2.pi = 3.14;

    printf("Enter the Radius : ");
    scanf("%d",&s2.r);
    

    


    s2.rectangle = s2.x*s2.y;
    s2.square = s2.z*s2.z;
    s2.circle = s2.pi*s2.r*s2.r;
   

    printf("Area of Rectangle is = %d\n",s2.rectangle);
    printf("Area of Square is = %d\n",s2.square);
    printf("Area of Circle is  = %f\n",s2.circle);
    
    

    

}

