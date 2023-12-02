#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    int s;
    for(s=120; s>=0; s--)
    	{
			printf("[%2d]",s);
			sleep(1);
		}
    return 0;
}

