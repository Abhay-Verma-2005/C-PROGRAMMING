// By Passing Arguments but No Return Type:
#include <stdio.h>

void addNumbers(int a, int b) {
    int sum = a + b;
    printf("Sum: %d\n", sum);
}

int main() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    addNumbers(num1, num2);

    return 0;
}


