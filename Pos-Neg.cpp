#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	int a;
	printf("ENTER THE NUMBER : ");
	scanf("%d",&a);
	if (a==0)
	printf("NUMBER IS ZERO");
	else
	{
		(a<0)?printf("NUMBER IS NEGATIVE"):printf("NUMBER IS POSITIVE");	
	}

    return 0;
}

