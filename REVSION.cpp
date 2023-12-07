#include <stdio.h>

int main()
{
	int n;
	printf("enter the size: ");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i < n; i++)
	{
		printf("Enter the value at index %d: ",i);
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	// delition
	int pos;
	printf("\nEnter the deletion index: ");
	scanf("%d",&pos);
	for (int i=pos;i < n; i++)
	{
		a[i]=a[i+1];
		
	}
	for (int i=0;i < n-1;i++)
	{
		printf("%d ",a[i]);
	}
}

