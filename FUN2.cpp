//Without Passing Arguments but Return Type:
#include <stdio.h>

int addNumbers() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    return num1 + num2;
}

int main() {
    int sum = addNumbers();
    
    printf("Sum: %d\n", sum);

    return 0;
}

