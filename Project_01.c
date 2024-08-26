#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // printf("Random Number : %d\n", randomNumber);
    
    do
    {
        printf("Guess the Number : ");
        scanf("%d", &guessed);
        if (guessed>randomNumber)
        {
            printf("Lower Number\n");
        }
        else if(guessed<randomNumber)
        {
            printf("Higher Number\n");
        }
        else{
            printf("Congratulations You Got The Number!\n");
        }
        no_of_guesses++;
        
        
    } while (guessed != randomNumber);
    
    printf("Number of You Guessed : %d", no_of_guesses);

    return 0;
}