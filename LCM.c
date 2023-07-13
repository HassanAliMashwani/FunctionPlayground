#include<stdio.h>

// Function to calculate GCD
int calculateGCD(int num1, int num2)
{
    int gcd, i;

    // Find GCD
    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }

    return gcd;
}

// Function to calculate LCM
int calculateLCM(int num1, int num2)
{
    int lcm;

    // Calculate LCM using GCD
    lcm = (num1 * num2) / calculateGCD(num1, num2);

    return lcm;
}

int main()
{
    int number1, number2;

    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    // Function call to calculate LCM
    int lcm = calculateLCM(number1, number2);

    printf("LCM of %d and %d is %d\n", number1, number2, lcm);

    return 0;
}
