// Create an array of random ints < 8, with number of elements given by user

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Read in number of elements in int array
    int numberOfElements;
    printf("numberOfElements: ");
    scanf("%d", &numberOfElements);

    // Create the array
    int nums[numberOfElements];

    // Seed the random function
    long timeValue = time(NULL);
    srand(timeValue);

    // Generate random numbers, add to array and print the array values
    for (int i=0; i<numberOfElements; i++)
    {
        nums[i] = rand() % 8;
        printf("%4d", nums[i]);
    }
    printf("\n");


    return 0;
}
