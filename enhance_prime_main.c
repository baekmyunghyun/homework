// Program to check if a number is prime
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number;
    int divisor;
    int isPrime = 1;

    // Prompt user for input
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1 || number <= 1) {
        printf("Invalid input. Please enter a positive integer greater than 1.\n");
        return 1;
    }

    // Check for factors from 2 to sqrt(number)
    for (divisor = 2; divisor <= sqrt(number); divisor++)
    {
        if (number % divisor == 0)
        {
            isPrime = 0;
            break;
        }
    }

    // Output the result
    if (isPrime)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}