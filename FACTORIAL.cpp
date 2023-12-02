#include <stdio.h>
int main() {
    int n,fact=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=n;i>0;i--)
	{
		fact=fact*i;
    }
    printf("Factorial of numbers %d is %d",n,fact);
    return 0;
}

