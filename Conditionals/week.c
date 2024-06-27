#include<stdio.h>
void main()

{
    int week;
    printf("Enter The Number : ");
    scanf("%d",&week);

    switch(week)
    {
        case 1:
        printf("MONDAY");
        break;


        case 2:
        printf("TUESDAY");
        break;

        case 3:
        printf("WEDESDAY");
        break;

        case 4:
        printf("THURSDAY");
        break;

        case 5:
        printf("FRIDAY");
        break;

        case 6:
        printf("SATURDAY");
        break;

        case 7:
        printf("SUNDAY");
        break;

        default:

        printf("Not a Valid Day");
        break;

    }
}