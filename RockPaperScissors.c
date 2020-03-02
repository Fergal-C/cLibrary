// One player rock, paper scissors game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

// Global variables to keep score
int playerScore = 0;
int computerScore = 0;

void DetermineWinner(int, int);

void PrintChoice(int);

int main()
{
    // Introduce game
    printf("Lets, play Rock, Paper, Scissors\n");

    // Variables for players' choices
    int userChoice = 0;
    int computerChoice = 0;

    // keep playing, until player enters 4 to exit
    while (userChoice != 4)
    {
        // Allocate random choice, between 1 & 3, for computer
        long timeValue = time(NULL);
        srand(timeValue);
        computerChoice = (rand() % 3) + 1;

        printf("\n\nEnter\n\t1 to chose Rock\n\t2 to chose Paper\n\t3 to chose Scissors\n");
        printf("\t4 to Exit\nYour Choice: ");
        scanf("%d", &userChoice);

        // Print Choices
        printf("\nYou choose ");
        PrintChoice(userChoice);

        printf("Computer choose ");
        PrintChoice(computerChoice);

        // Print Winner
        DetermineWinner(userChoice, computerChoice);
    }

    return 0;
}


void PrintChoice(int choiceNumber)
{
    if (choiceNumber == ROCK)
        printf("Rock\n");
    else if (choiceNumber == PAPER)
        printf("Paper\n");
    else if (choiceNumber == SCISSORS)
        printf("Scissors\n");
    else if (choiceNumber == 4)
        printf("End game\n");
    else
        printf("Invalid choice \n");
}


void DetermineWinner(int userChoice, int computerChoice)
{
    char winner[20] = "Computer won\n";

    // change the winner string, if the human player has won
    if (
         userChoice == ROCK && computerChoice == SCISSORS ||
         userChoice == PAPER && computerChoice == ROCK ||
         userChoice == SCISSORS && computerChoice == PAPER
        )
    {
        playerScore++;
        strcpy(winner, "You won\n");
    }
    else if (userChoice == computerChoice || userChoice == 4)
        strcpy(winner, "No winner\n");
    else
    {
        computerScore++;
    }

    printf("%s\n", winner);
    printf("Your score: %d\n", playerScore);
    printf("computerScore: %d\n", computerScore);
    printf("--------------------------\n\n\n");
}



