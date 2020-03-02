#include <stdio.h>
#include <stdlib.h>

void fun1();

void fun2();

int main()
{

    fun1();

    // when we leave fun1() value is left in the stack
    // that stack position & value is assigned to new variable in fun2()

    fun2();
    return 0;
}


void fun1()
{
    int i;
    printf("i. %d\n", i);
    i = 20;
    printf("i. %d\n\n\n", i);
}


void fun2()
{
    int j;
    printf("j. %d\n", j);
    j++;
    printf("j. %d\n", j);
}

