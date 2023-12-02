#include <stdio.h>

int main() {
    int i = 1;
printf("BREAK STATEMENT : \n");
    while (i <= 10) {
        printf("%d\n", i);
        if (i == 5) {
            break;
        }

        i++;
    }
    
    printf("CONTINUE  STATEMENT :\n");
	for (int i = 1; i <= 10; ++i) {
        if (i % 3 == 0) 
            continue;
        
        printf("%d\n", i);
    }
	printf("GOTO  STATEMENT :\n");
	
    i = 1;
    jump:
    printf("%d\n", i);
	i++;	
    if (i <= 10)
     {
    goto jump;
	}
    return 0;
}

