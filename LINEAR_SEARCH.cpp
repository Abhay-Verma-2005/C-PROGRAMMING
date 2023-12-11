//LINEAR SEARCH OF ELEMENT IN 1-D ARRAY:
#include <stdio.h>
int main()
{
	int n,count=0;
	int item;
    printf("Enter the size of an ARRAY: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the values :\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &array[i]);
	}
	for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
	}
	//FOR SEARCHING
	printf("\nEnter the searching element: ");
    scanf("%d", &item);
    for (int i = 0; i < n; i++) {
        if (array[i]==item){
		printf("\nELEMENT FOUND AT INDEX: %d\n", i);
		count++;
		continue;
		}
	}
	if (count==0){
			printf("\nELEMENT IS NOT FOUND ");
	}
    return 0;
}

