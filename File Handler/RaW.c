#include<stdio.h>
void main()
{
  FILE *fp;
  fp = fopen("tushar3.txt","w+");
  fputs("Welcome To the Institute",fp);
  fseek(fp,7,SEEK_SET);
  fputs("Add it",fp);
  fclose(fp);

}