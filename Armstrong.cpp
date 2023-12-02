#include <stdio.h>
#include <math.h>

int main() {
    int num, org, rem, result = 0, a = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    org = num;
    while (org != 0) {
        org /= 10;
        a++;
    }
    int temp = num ,sum = 0;
    while (num > 0) {
        rem = num % 10;
        sum = sum + pow(rem, a);
        num /= 10;
    }
    if (sum == temp) {
        printf("%d is an Armstrong number.\n", sum);
    } else {
        printf("%d is not an Armstrong number.\n",sum);
    }

    return 0;
}

