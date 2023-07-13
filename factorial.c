#include<stdio.h>

// Function to calculate factorial
unsigned long long factorial(int num)
{
    unsigned long long fact = 1;
    int i;

    // Calculate factorial
    for (i = 1; i <= num; i++)
        fact *= i;

    return fact;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Function call to calculate factorial
    unsigned long long result = factorial(number);

    printf("Factorial of %d is %llu\n", number, result);

    return 0;
}
