#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	int n;
	printf("ENTER THE SIZE: ");
	scanf("%d",&n);
	for (int i = 1; i <= n; i++) 
	{
		for (int k = i; k <= n; k++) {
            printf(" ");
        }	
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }  
    printf("\n");
	printf("\nAFTER ROTATE 180 \n");
	printf("\n");
	for (int i = n; i >= 1; i--) 
	{
		for (int k = i; k <= n; k++) {
            printf(" ");
        }	
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }  
    return 0;
}

