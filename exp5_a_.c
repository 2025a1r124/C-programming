#include <stdio.h>

int main() {
    int n, i = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not prime.\n", n);
        return 0;
    }

    while (i < n) {
        if (n % i == 0) {
            printf("%d is not prime.\n", n);
            return 0;
        }
        i++;
    }

    printf("%d is prime.\n", n);
    return 0;
}

