 #include <stdio.h>
#include <math.h>

int main() {
    int num,temp, org, rem, result = 0, a = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    org = num;
    temp=num;
    while (org != 0) {
        org /= 10;
        a++;
    }
    int sum = 0;
    while (num > 0) {
        rem = num % 10;
        sum = sum + pow(rem, a);
        num /= 10;
    }
    if (sum == temp) {
        printf("%d is an Armstrong number.\n", temp);
    } else {
        printf("%d 1is not an Armstrong number.\n",temp);
    }

    return 0;
}
