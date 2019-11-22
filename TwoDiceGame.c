// Guess the sum of values of two rolled dice.
// The rolling will be done by the computer.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variables for dice rolls, user guess and count
    int diceOne, diceTwo, sum, guessCount, userGuess;
    guessCount = userGuess = 0;

    // generate random numbers from 1 - 6
    long timeValue = time(NULL);
    srand(timeValue);

    diceOne = (rand() % 6) + 1;
    diceTwo = (rand() % 6) + 1;

    sum = diceOne + diceTwo;


    // read in user's guess
    // break if guess is correct
    while (guessCount < 5 && userGuess != sum)
    {
        printf("Guess sum of two dice rolls: ");
        scanf("%d", &userGuess);

        guessCount++;

        // if guess is correct
        if (userGuess == sum)
            printf("\nYou won ");
        // if guess is low
        else if (userGuess < sum)
            printf("Too Low\n");
        // if guess is high
        else
            printf("Too High\n");
    }


    // if not guessed in five guesses
    if (sum != userGuess)
        printf("\nSorry you lost with %d guesses\n", guessCount);

    // print guess count


    // print dice rolls
    printf("Dice One: %d\n", diceOne);
    printf("Dice Two: %d\n", diceTwo);
	printf("The correct sum was %d!\n\n", sum);

    return 0;
}
