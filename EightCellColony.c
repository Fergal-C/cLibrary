// 8 colony cell
#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

void printColony(int [], int);

void EightcolonyCell(int [], int);

int main()
{
    int colony[] = {1, 1, 1, 1, 1, 1, 1, 1};

    EightcolonyCell(colony, 40);

    return 0;
}


void printColony(int colony[], int cell)
{
    printf("[");

    for (int i=0; i<cell; i++)
    {
        if (i != cell-1)
            printf("%2d  |", colony[i]);
        else
            printf("%2d  ]", colony[i]);
    }
    printf("\n");
}





void EightcolonyCell(int colony[], int days)
{
    int currentDay = 1;

    // temporary array to allow changing values
    int tempColony[SIZE];

    // int variables for values to the left and right of the current cell
    int left, right;

    while(currentDay <= days)
    {
        for (int i=0; i<SIZE; i++)
        {
            left = (i==0) ? 0 : colony[i-1];

            right = (i == SIZE - 1) ? 0 : colony[i+1];

            if (left == right)
                tempColony[i] = 0;
            else
                tempColony[i] = 1;
        }

        // copy the content of the temp array into the colony array
        for (int i=0; i<SIZE; i++)
            colony[i] = tempColony[i];

        // print colony status after day
        printf("Day %d:\t", currentDay);
        printColony(colony, SIZE);

        currentDay++;
    }

}




