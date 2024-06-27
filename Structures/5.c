#include<stdio.h>
#include<string.h>

union student
{
    char nm[200];
    int roll;
    float marks;
};

void main()
{
    union student s1;

    strcpy(s1.nm,"Tushar");
    s1.roll = 89;
    s1.marks = 115.369;

    printf("Name = %s\n",s1.nm);
    printf("Roll Number  = %d\n",s1.roll);
    printf("Marks = %f\n",s1.marks);
}