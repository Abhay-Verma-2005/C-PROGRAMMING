//WITHOUT PASSING ARGUEMENT BUT RETURN TYPE:
#include<stdio.h>
float area()
{
	float r,a;
	printf("Enter the radius :");
	scanf("%f",&r);
	a=3.14*r*r;
	printf("AREA OF circle : %f \n",a);
	return a; 														//retun type is area of circle which is in float
}
int main()
{
	float x= area();
}
