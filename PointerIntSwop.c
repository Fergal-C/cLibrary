// Create a function, using pointers,
// which swops the values of two int variables

#include <stdio.h>
#include <stdlib.h>

void swop(int *, int *);

int main()
{
    int x = 100;
    int y = 200;

    printf("x: %d\ty: %d\n", x, y);

    swop(&x, &y);

    printf("x: %d\ty: %d\n", x, y);

    return 0;
}

void swop(int *pa, int *pb)
{
    *pa = *pa + *pb;
    *pb = *pa - *pb;
    *pa = *pa - *pb;
}
