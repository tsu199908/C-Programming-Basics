#include<stdio.h>
#include<string.h>

struct student
{
    char nm[100];
    int rollno;
    float marks;

};

void main()
{
   struct student s1,s2;
   strcpy(s1.nm,"Tushar");
   s1.rollno = 89;
   s1.marks = 95.63;

   printf("Name of 1st Student = %s\n",s1.nm);
   printf("Roll Number of 1st Student = %d\n",s1.rollno);
   printf("Marks of 1st Student = %f\n",s1.marks);

     strcpy(s2.nm,"Virat");
   s2.rollno = 64;
   s2.marks = 89.2;

   printf("Name of 2nd Student = %s\n",s2.nm);
   printf("Roll Number of 2nd Student = %d\n",s2.rollno);
   printf("Marks of 2nd Student = %f\n",s2.marks);



   



}
