#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int rockpaperscissor(char you, char comp);

int main(){
    char you; 
    char comp;
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        comp = 'R';
    }
    else if(number>33 && number<66){
        comp='P';
    }
    else{
        comp='S';
    }
    
    printf("Enter 'R' for Rock , 'P' for Paper and 'S' for Scissors : ");
    scanf("%c", &you);
    int result = rockpaperscissor(you, comp);
    if(result ==0){
        printf("Game draw!\n");
    }
    else if(result==1){
        printf("You win!\n");
    }
    else{
        printf("You Lose!\n");
    }
    printf("You chose %c and Computer chose %c. ", you, comp);
    return 0;
}

int rockpaperscissor(char you, char comp){
    // returns 1 if you win, -1 if you lose and 0 if draw
    
    if(you == comp){
        return 0;
    }

    if(you== 'R' && comp=='P'){
        return -1;
    }
    else if(you=='P' && comp=='R'){
        return 1;
    }

    if(you=='S' && comp=='P'){
        return 1;
    }
    else if(you=='S' && comp=='R'){
        return -1;
    }

    if(you=='S' && comp=='R'){
        return -1;
    }
    else if(you=='R' && comp=='S'){
        return 1;
    }
}
