//AREA OF SQUARE & VOLUME OF CUBE (with NO RETURN TYPE)
//SUM FUNCTION
#include<stdio.h>
void area();
void vol();
void area()
{
	int x,a;
	printf("Enter the side of SQUARE: ");
	scanf("%d",&x);
	a=x*x;
	printf("AREA OF SQUARE : %d \n",a);
}

void vol()
{
	int x,v;
	printf("Enter the side of CUBE: ");
	scanf("%d",&x);
	v=x*x*x;
	printf("AREA OF CUBE : %d \n",v);
}
int main()
{
	area();
	vol();

}
