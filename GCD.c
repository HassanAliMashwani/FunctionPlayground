#include<stdio.h>

// Function to calculate GCD
int calculateGCD(int num1, int num2)
{
    int gcd = 1, i;

    // Find GCD
    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }

    return gcd;
}

int main()
{
    int number1, number2;

    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    // Function call to calculate GCD
    int gcd = calculateGCD(number1, number2);

    printf("GCD of %d and %d is %d\n", number1, number2, gcd);

    return 0;
}
