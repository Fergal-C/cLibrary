// Count number of words in text

#include <stdio.h>
#include <stdlib.h>


// Constants for whether In or Out of word
#define OUT 0
#define IN 1


int main()
{
    // variables for character int and word count
    int c, wordCount;
    wordCount = 0;

    // variable for state, in or out of word
    int state = OUT;


    // Read in text and count words
    while ( (c = getchar()) != EOF )
    {
        if (c != ' ' && c != '\t' && c != '/n' && state == OUT)
        {
            wordCount++;
            state = IN;
        }
        else if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
    }

    // print word count
    printf("wordCount:  %d\n", wordCount);

    return 0;
}
