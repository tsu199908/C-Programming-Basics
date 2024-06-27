#include<stdio.h>
void main()

{
    int marks; //Marks Obtained

    printf("Enter the Marks : ");
    scanf("%d",&marks);

    if(marks>=85 && marks <=100)
    {
    printf("Student got A+ Grade",marks);
    }

    else if(marks>=60 && marks<85)
    {
        printf("Student got A Grade ",marks);
    }

    else if(marks>=40 && marks<60)
    {
        printf("Student got B Grade",marks);
    }

    else if(marks>=30 && marks<40)
    {
        printf("Student got C grade",marks);
    }
else{
    printf("FAILED",marks);
}


}