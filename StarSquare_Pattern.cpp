#include <stdio.h>

int main() {
	//Square matrix
	int n=4;
	for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");
	// row =4 coloumn=1
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");
	// row =1 and column =4
    for (int i = 1; i <= 1; i++) {
        for (int j = 1; j <= 4; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

