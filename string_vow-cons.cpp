#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	printf("Enter a WORD : ");
	char a[100];
	gets(a);
	int count=0,y=0;
	int x=strlen(a);
	for(int i=0;i<x;i++)
	{
		int vow =a[i];
		switch (vow) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        	count++;
            break;
        default:
        	y=x-count;       	
	}
	}
	printf("----------------------\nNo. OF VOWELS     : %d\nNo. OF CONSONENTS : %d\n----------------------\n",count,y);
    return 0;
}

