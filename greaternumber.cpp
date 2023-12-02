#include<stdio.h>
int main()
	{
	int n,a,b=0;
	printf("Enter the number of enteries: ");
	scanf("%d",&n);
		for (int i=1;i<=n;i++)
		{
			printf("Enter %d number: ",i );
			scanf("%d",&a);
			if(b<=a)
			{	b=a;	}
			else
			{	b=b;	}			
		}
		printf("The greatest number is: %d",b);
	return 0;
	}
	
	
	
	
	
	
