#include <stdio.h>

int main() {
    int n, i;
    float num, max;

    // Input how many numbers
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input first number
    printf("Enter number 1: ");
    scanf("%f", &num);
    max = num; // Initialize max

    // Input remaining numbers and find maximum
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        if (num > max)
            max = num;
    }

    printf("Maximum number = %.2f\n", max);
    return 0;
}

