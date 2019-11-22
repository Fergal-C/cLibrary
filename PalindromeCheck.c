// Check if string is a palindrome

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    // Create string, array variables

    // user entered string
    char inputString[150];

    // string to test for palindrome - this will store the entered string with spaces removed
    char testString[150] = "";


    // Read in string to check
    printf("Enter string to check for palindrome:\n");
    scanf("%[^\n]", inputString);

    printf("\nYou entered:\n%s\n", inputString);


    // variable for length of input string
    int inputStringLength = strlen(inputString);
    printf("inputStringLength: %d\n", inputStringLength);


    // int variable for testString index position
    int testStringIndex = 0;


    // Remove spaces and convert all chars to lower case
    for (int i=0; i<inputStringLength; i++)
    {
        // if input string char is not a space, add that char to test array
        if (inputString[i] != ' ')
        {
            testString[testStringIndex] = inputString[i];

            // convert test array upper case chars, to lower case
            if (testString[testStringIndex] >= 65 && testString[testStringIndex] <= 90)
                testString[testStringIndex] += 32;

        testStringIndex++;
        }
    }


    // print the test string
    printf("\ntestString: %s\n", testString);


    // variable for length of test string
    int testStringLength = strlen(testString);
    printf("testStringLength: %d\n", testStringLength);


    // Bool variable for palindrome
    bool isPalindrome = true;

    // Check if string is palindrome, set bool variable to false if NOT
    for (int i=0; i<testStringLength; i++)
    {
        if (testString[i] != testString[testStringLength - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }


    // Print result of palindrome check
    if (isPalindrome)
        printf("Entered string is a palindrome\n");
    else
        printf("Entered string is NOT a palindrome\n");


    return 0;
}
