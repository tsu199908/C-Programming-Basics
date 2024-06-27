#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakewatergun(char you, char comp);

int main()
{ 
    char you,comp;
    srand(time(0));
    int number = rand()%100+1;

   // printf("Press 'S' for Snake ,'W' for Water and 'G' for Gun : ");
    //scanf("%c",&you);

    if(number<33)
    {
        comp = 'S';
    }

    else if(number>33 && number<66)
    {
        comp = 'W';
    }
    else
    {
     comp = 'G';
    }
    printf("Press 'S' for Snake ,'W' for Water and 'G' for Gun : ");
    scanf("%c",&you);

   
    int result = snakewatergun(you, comp);
    if(result ==0)
    {
        printf("Game draw!\n");
    }
    else if(result==1)
    {
        printf("You win!\n");
    }
    else
    {
        printf("You Lose!\n");
    }
    printf("You chose %c and Computer chose %c. ", you, comp);
    return 0;



}

int snakewatergun(char you, char comp)
{
    if(you==comp)
    {
        return 0;
    }

    if(you =='S' && comp =='W' )
    {
        return 1;
    }
    
    else if(you =='W' && comp =='S')
    {
    return -1;
    }

    if(you =='G' && comp == 'S')
    {
        return 1;
    }

    else if(you =='S' && comp =='G')
    {
        return 1;
    }

    if(you =='G'&& comp == 'W')
    {
        return 1;
    }

    else if(you =='W' && comp =='G')
    {
        return -1;
    }
}