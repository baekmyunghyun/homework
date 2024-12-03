//입력한 수가 소수 인지 판단해주는 프로그램
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    int i;
    int isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}