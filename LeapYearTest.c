// Read in a year
// Print if it is a leap year or not

// every 4th year is a leap year
// unless it is 100th year, but every 400th year is a leap year

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int year = 0;
    bool isLeapYear = false;

    // Read in year and assign to variable
    printf("Enter year: ");
    scanf("%d", &year);

    // Determine if year is a leap year
    if ( year % 4 == 0 )
    {
        if (year % 100 != 0 || year % 400 == 0)
            isLeapYear = true;
    }

    // Alternate if statement
    if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )
        isLeapYear = true;


    // Use Ternary Operator
    isLeapYear = (year % 4 == 0 && year % 100 != 0) ? true : ( (year % 400 == 0) ?  true : false);

    printf("\nisLeapYear: %d\n", isLeapYear);

    return 0;
}
