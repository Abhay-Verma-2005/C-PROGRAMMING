#include<stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char a[100];
	char b[100];
	
	gets(a);
	puts(a);
	int i=0 ,l=0,flag=0;
	while(a[i]!='/0',i++)
	{
		l++;
		i++;
	}
	for(int i=0; a[i]!='/0';i++)
	{
		if(a[i]!=a[l-i-1])
		{
			flag++;
			break;
		}
	}
	if (flag==0)
	{printf("palindrome!!!");}
	else
	{printf("Not palindrome!!!");}
	return 0;
}
