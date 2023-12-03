#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
printf("1-0 PATTERN ");
printf("\n\n");
	int n=3;
	for (int i = 1; i <= n; i++) 
	{
        for (int j = 1; j <= n; j++) {
        	if (i==j)
        	printf("1 ");	
			else
            printf("0 ");
        }
        printf("\n");
    }
    

printf("\nA to Y SQUARE by count increamnet");
printf("\n\n");
	char count='A';
	n='E';
	for (char i = 'A'; i <= n; i++) 
	{
        for (char j = 'A'; j <= n; j++) {
            printf("%c ",count);
            count++;
        }
        printf("\n");
    } 
printf("\n1 to 25 SQUARE by count increamnet");
printf("\n\n");
	int c=1;
	n=5;
	for (int i = 1; i <= n; i++) 
	{
        for (int j = 1; j <= n; j++) {
            printf("%d",c);
            c++;
        }
        printf("\n");
    } 
printf("\nA to U Triangle by count increamnet");
printf("\n\n");
	count='A';
	n='F';
	for (char i = 'A'; i <= n; i++) 
	{
        for (char j = 'A'; j <= i; j++) {
            printf("%c ",count);
            count++;
        }
        printf("\n");
    } 
    return 0;
}

