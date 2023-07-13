#include<stdio.h>

// Function to check prime number
int isPrime(int num)
{
    int i;

    // 0 and 1 are not prime numbers
    if (num <= 1)
        return 0;

    // Check for divisibility from 2 to num-1
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0; // Not a prime number
    }

    return 1; // Prime number
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Function call to check prime or not
    if (isPrime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}
