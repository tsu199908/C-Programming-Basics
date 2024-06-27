#include<stdio.h>
int main()
{

    FILE *Fp;
    Fp = fopen("tushar.txt","w");
    if(Fp==NULL)
    {
        printf("Unable to Create the File");
    }

    else
    {
        printf("File Opened Successfully");
        fclose(Fp);
    }
    return 0;
    
}