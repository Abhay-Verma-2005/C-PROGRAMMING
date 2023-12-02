#include <stdio.h>
int main()
{  
	int a=1,n1,n2, max;
	printf("Enter n1 and n2 :");
	scanf("%d%d", &n1,&n2);
	max= (n1>n2) ? n1:n2;
	while (1)
		{
		if((max%n1==0) && (max%n2==0))
			{
				printf("The LCM of %d and %d is :%d", n1, n2, max);
				break;
			}
			max=max+1;
		}
	return 0;
}
