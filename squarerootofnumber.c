#include<stdio.h>
#include<math.h>

// Function to find square root
double findSquareRoot(double num)
{
    double result;

    // Calculate square root using sqrt() function from math.h
    result = sqrt(num);

    return result;
}

int main()
{
    double number, result;

    printf("Enter a number: ");
    scanf("%lf", &number);

    // Function call to find square root
    result = findSquareRoot(number);

    printf("Square root of %.2lf is %.2lf\n", number, result);

    return 0;
}
