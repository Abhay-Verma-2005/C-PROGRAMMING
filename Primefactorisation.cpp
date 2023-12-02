#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Prime factors of %d are: ", n);
 //18   
    int i = 2;
	while(i <= n) 
	{
        if (n % i == 0)
		{
            printf("%d ", i);
            n =n / i;
        } else 
		{
            i++;
        }
    }
    return 0;
}

