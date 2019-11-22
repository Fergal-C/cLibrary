// Find the longest word in a string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{


    // char arrays for input string, current word and longest word
    char inputString[] = "The quick brown fox jumped over the lazy dog's tail.";
    char currentWord[40] = "";
    char longestWord[40] = "";


    // int variables
    int currentWordLength = 0;
    int longestWordLength = 0;
    int inputStringLength = strlen(inputString);

    // find the longest word
    for (int i=0; i<inputStringLength; i++)
    {
        // if current character is not a blank character
        if (inputString[i] != ' ' && inputString[i] != '\t' && inputString[i] != '\n')
        {
            // add character to current word
            currentWord[currentWordLength] = inputString[i];

            currentWordLength++;

            if (currentWordLength > longestWordLength)
            {
                longestWordLength = currentWordLength;
                strcpy(longestWord, currentWord);
                // print test
                // printf("longestWord: %s\n", longestWord);
            }
        }
        else
            {
                currentWordLength = 0;
                strcpy(currentWord, "");
            }
    }


    // print the longest word
    printf("longestWordLength: %d\n", longestWordLength);
    printf("longestWord: %s\n", longestWord);


    return 0;
}
