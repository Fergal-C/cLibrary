// write function to test if a number is an Armstrong number,
// i.e. each digit raised to the power of the number of digits = the number itself
// 371 and 1634 are example Armstrong numbers

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int findNumberOfDigits(int);

bool checkIfArmstrong(int);



int main()
{
    // variable for number to test for Armstrong number
    int originalNumber = 1634;

    if (checkIfArmstrong(originalNumber))
        printf("%d is an Armstrong number\n", originalNumber);
    else
        printf("%d is NOT an Armstrong number\n", originalNumber);

    return 0;
}



// count the number of digits in the passed in number
int findNumberOfDigits(int numberToTest)
{
    int numberOfDigits = 0;

    while (numberToTest >= 1)
    {
        numberOfDigits++;

        // remove least significant digit
        numberToTest /= 10;
    }

    return numberOfDigits;
}



// Check if the passed in number is an Armstrong number
bool checkIfArmstrong(int numberToTest)
{
    bool isArmstrong = false;

    int digitCount = findNumberOfDigits(numberToTest);

    // make a copy of the number
    int temp = numberToTest;

    int sumOfPowers = 0;

    // int variable for individual digits
    int digit = 0;

    // raise digits to power
    for (int i=1; i<= digitCount; i++)
    {
        // store least significant digit
        digit = temp % 10;

        // calculate the power and add it to the sum
        sumOfPowers += pow(digit, digitCount);

        // remove the least significant digit
        // so we can get the next digit on next iteration
        temp /= 10;
    }

    if (sumOfPowers == numberToTest)
        isArmstrong = true;

    return isArmstrong;
	
	// OR
	// return (sumOfPowers == numberToTest)
}





