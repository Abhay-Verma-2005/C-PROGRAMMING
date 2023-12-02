//POINTERS 
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the numbers A and B : ");
	scanf("%d%d",&a,&b);
	int	*p=&a ,*q=&b;
	int temp;
	printf("BEFORE SWAPING (A=%d) and (B=%d) \n",*p,*q);
	temp=*p;
	*p=*q;
	*q=temp;
	printf("AFTER  SWAPING (A=%d) and (B=%d)",*p,*q);
	
}
