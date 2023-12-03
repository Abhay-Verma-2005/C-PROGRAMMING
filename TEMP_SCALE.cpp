#include <stdio.h>

int main() {
    int temp;

    printf("Enter a current Temperature: ");
    scanf("%d", &temp);

    if (temp<=0) 
            printf("FREEZING WEATHER");
    else if(temp>0 && temp<10)
            printf("VERY COLD");
    else if(temp>=10 && temp<20)
            printf("ITS COLD");
    else if(temp>=20 && temp<30)
            printf("NORMAL TEMPERATURE");
    else if(temp>=30 && temp<40)
            printf("ITS WARM");
    else if(temp>=40 && temp<45)
            printf("TOO HOT");
    else if(temp>=45)
            printf("VERY HOT");
    else
            printf("Error: Invalid TEMPERATURE\n");

    return 0;
}

