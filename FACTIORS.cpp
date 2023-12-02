#include <stdio.h>
int main() {
    int n,count=0;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
	for(int i=1; i<=n ;i++)
	{
	if(n%i==0)
		printf("%d,",i);
	}
}

