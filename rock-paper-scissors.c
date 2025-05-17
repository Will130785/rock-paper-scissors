#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int generateRandomNumber();

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
        if (userInput == computerInput)
        {
            printf("You both chose the same option, choose again");
        }
        else if (userInput == 0 && computerInput == 1)
        {
            printf("You chose rock, the computer chose paper - computer wins");
            gameOver = true;
        }
        else if (userInput == 1 && computerInput == 0)
        {
            printf("You chose paper, the computer chose rock - you win");
            gameOver = true;
        }
        else if (userInput == 2 && computerInput == 0)
        {
            printf("You chose scissors the computer chose rock - computer wins");
            gameOver = true;
        }
        else if (userInput == 0 && computerInput == 2)
        {
            printf("You chose rock, the computer chose scissors - you win");
            gameOver = true;
        }
        else if (userInput == 1 && computerInput == 2)
        {
            printf("You chose paper, the computer chose scissors - computer wins");
            gameOver = true;
        }
        else if (userInput == 2 && computerInput == 1)
        {
            printf("You chose scissors, the computer chose paper - you win");
            gameOver = true;
        }
    }
    return 0;
}

int generateRandomNumber()
{
    srand(time(NULL));
    return rand() % 3;
}