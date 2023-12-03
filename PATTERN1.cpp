#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
printf("Right Angle triangle 1,2,3,4 by rows");
printf("\n\n");
	int n=4;
	for (int i = 1; i <= n; i++) 
	{
        for (int j = 1; j <= i; j++) {
            printf("%d ",i);
        }
        printf("\n");
    }  
printf("\nRight Angle triangle 1,2,3,4 by columns");
printf("\n\n");
	n=4;
	for (int i = 1; i <= n; i++) 
	{
        for (int j = 1; j <= i; j++) {
            printf("%d ",j);
        }
        printf("\n");
    } 
    return 0;
}

