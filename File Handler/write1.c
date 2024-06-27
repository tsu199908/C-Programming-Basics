#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    FILE *fp;
    char ch[150] = {"Visveswaraya National Institute of Technology"};
    fp = fopen("tushar2.txt","w");

    if(fp==NULL)
    {
        printf("Cannot Open the File");
    }

    for(i=0;i<=strlen(ch);i++) 
     {

putc(ch[i],fp);
    }

    fclose(fp);
    return 0;
}