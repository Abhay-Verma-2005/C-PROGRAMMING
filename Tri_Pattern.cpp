//ALL Triangle Pattern
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
printf("Right Angle triangle");
printf("\n\n");
	int n=4;
	for (int i = 1; i <= n; i++) 
	{
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }     
printf("\n\n");   
printf("VERTICALLY SYMETRICAL TRIANGLE");
printf("\n\n");
	n=4;
	for (int i=n; i >= 1; i--) 
	{
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
printf("\n\n");
printf("MIRROR RIGHT ANGLED TRIANGLE");
printf("\n\n");
n=4;
	for (int i = 1; i <= n; i++) 
	{
		for (int k = n; k >i; k--)  
		{
            printf("  ");
        }
        for (int j = 1; j <= i; j++) 
		{
            printf("* ");
        }
        printf("\n");
    }
printf("\n\n");
printf("VERTICALLY SYMETRICAL OF MIRROR TRIANGLE");
printf("\n\n");
n=4;
	for (int i = n; i >= 1; i--) 
	{
		for (int k = n; k >i; k--) 
		{
            printf("  ");
        }
        for (int j = 1; j <= i; j++) 
		{
            printf("* ");
        }
        printf("\n");
    }
printf("\n\n");

    return 0;
}

