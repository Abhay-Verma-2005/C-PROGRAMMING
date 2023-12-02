#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Find the sum of proper divisors
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the number is a perfect number
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}

