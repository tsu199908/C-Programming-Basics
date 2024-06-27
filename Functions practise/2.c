#include<stdio.h>

int namaste();
int bonjour();

int main()
{
    char c;
    printf("press 'I' for Indian or 'F' for French : ");
    scanf("%c",&c);

    if(c=='I')
    {
        namaste();

    }

    else if(c=='F')
    {
       bonjour();
    }

    else
    {
        printf("Invalid Character");
    }

    
    return 0;
}

int namaste()
{
    printf("NAMASTE\n");
    return 0;
}

int bonjour()
{
    printf("BONJOUR\n");
    return 0;
}