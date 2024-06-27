#include<stdio.h>
#include<string.h>

struct student
{
    
    char nm[100];
    int rollno;
    float marks;

} ;

void main()
{
    struct student s;
    strcpy(s.nm,"Tushar\n");
    s.rollno = 72;
    s.marks = 89.51;

    printf("Name = %s\n",s.nm);
    printf("Roll no = %d\n",s.rollno);
    printf("Marks = %f\n",s.marks);
}


