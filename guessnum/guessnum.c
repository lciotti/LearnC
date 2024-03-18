//  Louis Ciotti
//  Copyright 2024
//
//  Guess then number program
//
//  This program will demonstrate loops. It generates a random number
//  between 0 and 20, then will give the user 5 tries to guess the 
//  number. The program will indicate if the users guess is above
//  or below the guessed number.

#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    // set up variables
    int randomNum = 0;
    int guessNum = 0;
    int playerGuess = 0;
    time_t timeSeed;
    
    // generate number
    srand((unsigned) time(&timeSeed));  // seed number generator
    randomNum = rand() % 21;            // generate number
    
    // game introduction
    printf("\n\n");
    printf("Number guessing game\n\n");
    printf("Rules:\n\n");
    printf("   - I will generate a random number from 1 to 20\n");
    printf("   - You will provide a guess and I will tell you:\n");
    printf("       - If the guess is correct\n");
    printf("       - if you guess incorrectly I will tell you if\n");
    printf("         your my number is higher of lower than your guess\n\n");
    printf("You have 5 guesses.  GOOD LUCK!!\n\n");

    for(guessNum = 1; guessNum <=5; guessNum++)
    {
        printf("Please enter your guess: ");
        scanf(" %i", &playerGuess);

        // Test to see if the guess was correct
        if(playerGuess == randomNum)
        {
            printf("\n\nWOW! You guessed my number!\n\n");
            printf("It took you %i guesses.", guessNum);
            break;
        }
        else if(playerGuess > randomNum)
        {
            printf("Sorry, but that is incorrect.\n");
            printf("My number is lower than your guess.\n\n Please try again.\n");
            printf("You have %d more guesses.\n\n", 5- guessNum);
        }
        else if(playerGuess < randomNum)
        {
            printf("Sorry, but that is incorrect.\n");
            printf("My number is higher than your guess.\n\n Please try again.\n");
            printf("You have %d more guesses.\n\n", 5 - guessNum);
        }
    }
    
    if(guessNum >= 5)
    {
    printf("Sorry but you failed to guess my number.\n\n");
    printf("My number was %d. Better luck next time!\n\n", randomNum);
    }
}