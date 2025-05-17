#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int generateRandomNumber();
bool processTurn(int userGuess, int computerGuess);

int main(void)
{
    int randomNumber = generateRandomNumber();
    bool gameOver = false;
    int userInput;
    int computerInput;

    printf("Welcome to Rock Paper Scissors\n");
    printf("Enter 0 for Rock\n");
    printf("Enter 1 for Paper\n");
    printf("Enter 2 for Scissors");

    while (gameOver == false)
    {
        scanf("%d", &userInput);
        computerInput = generateRandomNumber();
        gameOver = processTurn(userInput, computerInput);
    }
    return 0;
}

int generateRandomNumber()
{
    srand(time(NULL));
    return rand() % 3;
}

bool processTurn(int userGuess, int computerGuess)
{
    if (userGuess == computerGuess)
    {
        printf("You both chose the same option, choose again");
    }
    else if (userGuess == 0 && computerGuess == 1)
    {
        printf("You chose rock, the computer chose paper - computer wins");
        return true;
    }
    else if (userGuess == 1 && computerGuess == 0)
    {
        printf("You chose paper, the computer chose rock - you win");
        return true;
    }
    else if (userGuess == 2 && computerGuess == 0)
    {
        printf("You chose scissors the computer chose rock - computer wins");
        return true;
    }
    else if (userGuess == 0 && computerGuess == 2)
    {
        printf("You chose rock, the computer chose scissors - you win");
        return true;
    }
    else if (userGuess == 1 && computerGuess == 2)
    {
        printf("You chose paper, the computer chose scissors - computer wins");
        return true;
    }
    else if (userGuess == 2 && computerGuess == 1)
    {
        printf("You chose scissors, the computer chose paper - you win");
        return true;
    }
    return false;
}