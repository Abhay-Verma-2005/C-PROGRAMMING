//Swapping of two number without 3rd variable (by using function)
#include <stdio.h>
//LET DECLARE A FUNCTION BY PASSING ARGUEMENTS AND NO RETURN TYPE:
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAFTER SWAP: \n\t\ta=%d  b=%d",a,b);
}
int main()
{
	int a,b;
	printf("ENTER VALUE OF a AND b : ");
	scanf("%d%d",&a,&b);
	printf("BEFORE SWAP: \n\t\ta=%d  b=%d",a,b);
	swap(a,b);
	
    return 0;
}

