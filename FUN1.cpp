//Without Passing Arguments and No Return Type:
#include <stdio.h>

void addNumbers() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);
}

int main() {
    addNumbers();
    return 0;
}


