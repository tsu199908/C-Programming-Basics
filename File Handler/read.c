#include<stdio.h>
void main()
{
    char ch;
    FILE *fp;
    fp = fopen("tushar2.txt","r");

    if(fp==NULL)
    {
    printf("Can't Open the File");
    }

    while(1)
    {
        ch = fgetc(fp);
        if(ch==EOF)
        break;

        printf("%c",ch);
    }
    fclose(fp);

}