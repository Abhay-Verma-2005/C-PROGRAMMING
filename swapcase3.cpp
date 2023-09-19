#include<stdio.h>
int main()
	{
	int n,m,o;
	printf("first number: ");
	scanf("%d", &n);
	printf("second number: ");
	scanf("%d", &m);
	printf(" Before swaping numbers are   first number: %d and second number : %d",n,m);
	o=n;
	n=m;
	m=o;
	printf("\n After swaping numbers are   first number: %d and second number : %d",n,m);
	return 0;
	}
