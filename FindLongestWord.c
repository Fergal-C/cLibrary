// Find the longest word in a string


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // variables for character read in, longest word length, current word array index
    int c, currentWordIndex, longestWordLength;
    currentWordIndex = longestWordLength = 0;

    // arrays for current and longest words
    char currentWord[50];
    char longestWord[50];

    // read in text and find longest word
    while ( (c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c != '\n')
        {
            // add the read character to current word array
            currentWord[currentWordIndex] = c;
            currentWordIndex++;

            // if longest word, shorter than current word
            if (longestWordLength < currentWordIndex)
            {
                longestWordLength = currentWordIndex;

                strcpy(longestWord, currentWord);
            }
        }
        else
        {
            // if a blank character we are not in a word
            // set index to zero and current word to empty string
            currentWordIndex = 0;
            strcpy(currentWord, "");
        }
    }

    // print the longest word
    printf("\nlongestWord:\t%s\n", longestWord);

    return 0;
}
