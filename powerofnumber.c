#include<stdio.h>

// Function to calculate power
double calculatePower(double base, int exponent)
{
    double result = 1.0;
    int i;

    // Calculate power
    for (i = 1; i <= exponent; i++)
        result *= base;

    return result;
}

int main()
{
    double base, result;
    int exponent;

    printf("Enter base number: ");
    scanf("%lf", &base);

    printf("Enter exponent number: ");
    scanf("%d", &exponent);

    // Function call to calculate power
    result = calculatePower(base, exponent);

    printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, result);

    return 0;
}
