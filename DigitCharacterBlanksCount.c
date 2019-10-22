// Read in text, count number of each digit,
// white space characters and all other characters

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // int variables for character read in, blank characters and other characters
    int c, blankCharacterCount, otherCharacterCount;
    blankCharacterCount = otherCharacterCount = 0;


    // int array to track count of each digit: 0- 9
    int digitCounts[10] = {0};


    // read in and count characters
    while ( (c = getchar()) != EOF )
    {
        // if c is a digit
        // ASSCII value of '0' char is 48
        if (c >= 48 && c <= 57)
        {
            // convert to int value
			c -= 48;
			
			// count digits
            digitCounts[c]++;
        }
        // if c is a blank character, i.e. space, tab or new line
        else if (c == ' ' || c == '\t' || c == '\n')
        {
            blankCharacterCount++;
        }
        // if c is an, other character
        else
        {
            otherCharacterCount++;
        }
    }

    // print counts of blank and other characters
    printf("\nBlank Character Count: %d\n", blankCharacterCount);
    printf("Other Character Count: %d\n\n", otherCharacterCount);

    // print digit counts
    for (int i=0; i<10; i++)
    {
        printf("# %d digits:\t%d\n", i, digitCounts[i]);
    }

    return 0;
}
