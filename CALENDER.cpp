#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
printf("\n30 DAY CALENDER OF A MONTH\n\n");
int c=1;
	int n=1;
	for (int i = 1; i <= n; i++) 
	{
		for (int j = 1; j <= 7; j++) {
            
			if(j==1)
			printf("S\t");
			if(j==2)
			printf("M\t");
			if(j==3)
			printf("Tu\t");
			if(j==4)
			printf("W\t");
			if(j==5)
			printf("Th\t");
			if(j==6)
			printf("F\t");
			if(j==7)
			printf("S\t");
	}
}
printf("\n\n");

	c=1;
	n=5;
	for (int i = 1; i <= n; i++) 
	{
        for (int j = 1; j <= 7; j++) {
        	if(c<=30)
            {
			printf("%d\t",c);
            c++;
			}
        }
        printf("\n");
    } 

    return 0;
}

