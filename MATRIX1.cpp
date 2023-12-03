#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
printf("SCALAR MATRIX");
printf("\n\n");
	char n=3;
	for (char i = 1; i <= n; i++) 
	{
        for (int j = 1; j <= n; j++) {
        	if (i==j)
        	printf("1 ");	
			else
            printf("0 ");
        }
        printf("\n");
    } 
    return 0;
}

