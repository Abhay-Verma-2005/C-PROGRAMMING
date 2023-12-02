#iclude <stdio.h>
#include <string.h>

int main() {
    char name[50];
    char gender;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);

    

    return 0;
}

