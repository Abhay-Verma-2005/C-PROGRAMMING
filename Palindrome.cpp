#include <stdio.h>
int main() {
    int n,rev=0,r,org;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    org=n;
	while(n!=0)
	{
		r=n%10;
		rev=(rev*10+r);
		n=n/10;
	}
	if (rev==org)
		printf("PLAINDROME");
	else
		printf("NOT  PLAINDROME");

}

