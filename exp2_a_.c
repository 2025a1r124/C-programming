#include <stdio.h>

int main() {
    int a, b;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Performing arithmetic operations
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Remainder: %d\n", a % b);

    return 0;
}

