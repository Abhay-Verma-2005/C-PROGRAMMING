#include <stdio.h>
int main() {
    int n, a=0, b=1, fb;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for(int i=1 ; i<=n ; i++)
		{
			printf(" %d ", a);
            fb = a + b;
            a = b;
            b = fb;
            
        } 
    return 0;
}

