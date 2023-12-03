#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
printf("ABCD SQUARE by rows");
printf("\n\n");
	char n='E';
	for (char i = 'A'; i <= n; i++) 
	{
        for (int j = 'A'; j <= n; j++) {
            printf("%c ",i);
        }
        printf("\n");
    } 
printf("\nABCD SQUARE by columns");
printf("\n\n");
	n='D';
	for (char i = 'A'; i <= n; i++) 
	{
        for (int j = 'A'; j <= n; j++) {
            printf("%c ",j);
        }
        printf("\n");
    }
printf("\nABCD TRIANGLE by rows");
printf("\n\n");
	n='D';
	for (char i = 'A'; i <= n; i++) 
	{
        for (int j = 'A'; j <= i; j++) {
            printf("%c ",i);
        }
        printf("\n");
    }
printf("\nABCD TRIANGLE by columns");
printf("\n\n");
	n='D';
	for (char i = 'A'; i <= n; i++) 
	{
        for (int j = 'A'; j <= i; j++) {
            printf("%c ",j);
        }
        printf("\n");
    }  
    
    return 0;
}

