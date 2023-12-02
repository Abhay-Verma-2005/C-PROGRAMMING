#include <stdio.h>
int main() {
    int n,rev=0,r;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=(rev*10+r);
		n=n/10;
	}
	printf("REVERSE OF NUMBER : ");
	printf("%d",rev);

}

