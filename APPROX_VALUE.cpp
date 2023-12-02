#include <stdio.h>
#include <math.h>

int main() {
    double originalNumber;
    printf("ENTER THE NUMBER: ");
    scanf("%lf",&originalNumber);
    double roundedNumber = (originalNumber - floor(originalNumber) < 0.5) ? floor(originalNumber) : ceil(originalNumber);

    printf("Original number: %.2f\n", originalNumber);
    printf("Rounded number: %.2f\n", roundedNumber);
    
    printf("Result: %s\n", (roundedNumber > originalNumber) ? "Rounded number is greater" : "Rounded number is less");

    return 0;
}

