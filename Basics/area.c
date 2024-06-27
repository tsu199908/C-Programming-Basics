#include<stdio.h>

void main()

{
    int side,l,w,b,h,r;
    float aoc;
    int aot,aos,aor;

    printf("Enter the Length and Width : ");
    scanf("%d %d",&l,&w);

    printf("Enter the Side : ");
    scanf("%d",&side);

    printf("Enter the Base and Height ");
    scanf("%d %d",&b,&h);

    printf("Enter the Radius ");
    scanf("%d",&r);

    aot = 0.5*b*h;
    aos = side*side;
    aor = l*b;
    aoc = 3.14*r*r;
  

    printf("Area of Triangle is : %d\n",aot);
    printf("Area of Square is : %d\n",aos);
    printf("Area of Rectangle is : %d\n",aor);
    printf("Area of Circle is : %f\n",aoc);


}