#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate and print Pascal's Triangle
void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            // Calculate the binomial coefficient using the formula n!/k!(n-k)!
            int coefficient = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%d ", coefficient);
        }
        printf("\n");
    }
}

int main() {
    int rows;
    
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    
    printPascalsTriangle(rows);
    
    return 0;
}
