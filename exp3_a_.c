#include <stdio.h>

int main() {
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check even or odd
    if (number % 2 == 0)
        printf("%d is even.\n", number);
    else
        printf("%d is odd.\n", number);

    return 0;
}

