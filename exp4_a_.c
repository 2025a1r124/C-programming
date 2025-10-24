#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate factorial using for loop
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Display result
    printf("Factorial of %d = %llu\n", n, factorial);

    return 0;
}

