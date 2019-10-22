// Find the longest word length in user input

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // variables for character, current word length and longest word length
    int c, currentWordLength, longestWordLength;
    currentWordLength = longestWordLength = 0;

    // read in text and find longest word length
    while ( (c = getchar()) != EOF )
    {
        // if c is a letter, increase current word length
        // test if current word longer than longest word
        // if it is record new value of longest word
        if (c != ' ' && c != '\t' && c != '\n')
        {
            currentWordLength++;

            if (currentWordLength > longestWordLength)
                longestWordLength = currentWordLength;
        }
        // if c is a blank character, we are not in a word
        // hence current word length is zero
        else
        {
            currentWordLength = 0;
        }
    }

    // print longest word length
    printf("longestWordLength: %d\n", longestWordLength);


    return 0;
}
