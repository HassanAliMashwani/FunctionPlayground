#include <stdio.h>

// Function to check if a number is perfect
int isPerfect(int num) {
    int sum = 0;
    
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    if (sum == num) {
        return 1; // Return 1 if number is perfect
    } else {
        return 0; // Return 0 if number is not perfect
    }
}

// Function to print perfect numbers within a range
void printPerfectNumbers(int lower, int upper) {
    printf("Perfect numbers between %d and %d are:\n", lower, upper);
    
    for (int i = lower; i <= upper; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
}

int main() {
    int lower, upper;
    
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    
    printf("Enter the upper limit: ");
    scanf("%d", &upper);
    
    printPerfectNumbers(lower, upper);
    
    return 0;
}
