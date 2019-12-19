// write a function to test if passed in number is prime

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkIfPrime(int);

int sumOfPrimes(int);

int main()
{

    // print all prime numbers from zero to 100
    for (int i=0; i<=100; i++)
    {
        if (checkIfPrime(i))
            printf("%d is prime\n", i);
    }

    // find and print sum of prime numbers
    int maxValue = 20;
    printf("Sum of primes up to and including %d is: %d\n", maxValue, sumOfPrimes(maxValue));

    return 0;
}

bool checkIfPrime(int numberToTest)
{

    bool isPrime = true;

    // 2 is only prime number divisible by 2
    if (numberToTest == 2)
        return isPrime;

    // numbers <= 1 are not prime
    if (numberToTest <= 1)
    {
        isPrime = false;
        return isPrime;
    }

    for (int i=2; i<=sqrt(numberToTest); i++)
    {
        if (numberToTest % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}

// calculate sum of prime numbers up to a max value
int sumOfPrimes(int max)
{
    int sum = 0;

    for (int i=2; i<=max; i++)
    {
        if (checkIfPrime(i))
            sum += i;
    }

    return sum;
}
