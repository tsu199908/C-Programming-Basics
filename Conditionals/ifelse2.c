#include<stdio.h>
void main()

{
    char c;
    printf("Enter the Character ");
    scanf("%c",&c);

    if(c=='a'|| c=='e' || c == 'i' || c == 'o' || c == 'u' )
    {
        printf("Character is Vowel in Lowecase Order",c);
    }
    else if(c=='A'|| c=='E' || c == 'I' || c == 'O' || c == 'U' )
    {
        printf("Character is Vowel in Uppercase Order",c);
    }
    else
    {
        printf("Character is not a Vowel or Character is Invalid",c);
        
    }
}