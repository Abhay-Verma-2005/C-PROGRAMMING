#include<stdio.h>
//By Using BITWISE operators
int main()
	{
	int n,m;
	printf("first number: ");
	scanf("%d", &n);
	printf("second number: ");
	scanf("%d", &m);
	printf("Before swaping numbers are \n\tfirst number = %d\n\tsecond number= %d",n,m);
	n = n ^ m;
    m = n ^ m;
    n = n ^ m;
	printf("\nAfter swaping numbers are \n\tfirst number = %d\n\tsecond number= %d",n,m);
	return 0;
	}
