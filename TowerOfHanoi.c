// Tower of Hanoi

#include <stdlib.h>
#include <stdio.h>

void TowerOfHanoi(int, int, int, int);


int main()
{
    TowerOfHanoi(2, 1, 2, 3);

    return 0;
}



void TowerOfHanoi(int rings, int source, int auxiliary, int destination)
{
    if (rings == 1)
    {
        printf("Move the disc from Tower %d to Tower %d\n", source, destination);
        return;
    }

    TowerOfHanoi(rings - 1, source, destination, auxiliary);
    TowerOfHanoi(1, source, auxiliary, destination);
    TowerOfHanoi(rings - 1, auxiliary, source, destination);
}
