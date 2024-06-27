#include<stdio.h>

void main()

{
  char g,j;

  for(g='a',j='A';g<='z'&& j<='Z';g++,j++)
  {
    printf("%c  %c\n",g,j);
   
  }

}