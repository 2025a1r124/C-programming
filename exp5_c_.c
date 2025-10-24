#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        digit = n % 10;
        sum += digit * digit * digit;  // Cube of digit
        n = n / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}

