#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	int i,n,count,st=1,end=100;
	for (n=st; n <= end; n++) 
	{
		count=0;
		for (int i = 2; i <= n/2; i++) 
		{
            if(n%i==0){
            	count++;
            	break;
			}
        }	
        if(count==0 && n!=1) {
            printf("%d ",n);
        }
    } 
    return 0;
}

