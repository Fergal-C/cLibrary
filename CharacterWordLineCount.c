// Read in text, count characters, words and lines

#include <stdio.h>
#include <stdlib.h>

// constants for state IN or OUT of word
#define OUT 0
#define IN 1


int main()
{
    // int variables for character read in
    // word, character and line count
    // state IN or OUT of word
    int c, characterCount, wordCount, lineCount, state;
    characterCount = wordCount = lineCount = 0;
    state = OUT;

    // read in characters and perform counts
    while ( (c = getchar()) != EOF )
    {
        // count characters
        characterCount++;

        // if character is blank, i.e. space, tab or new line
        if (c == ' ' || c == '\t' || c == '\n')
        {
            // change state
			state = OUT;

            // count lines
            if (c == '\n')
                lineCount++;
        }
        // if character is not blank and state is OUT
		// character is a letter and start of a word
        else if (state == OUT)
        {
            // count words
            wordCount++;

            // change state
            state = IN;
        }
    }


    // print counts
    printf("characterCount: %d\n", characterCount);
    printf("wordCount: %d\n", wordCount);
    printf("lineCount: %d\n", lineCount);

    return 0;
}
