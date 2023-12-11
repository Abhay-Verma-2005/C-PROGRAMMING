//BUBBLE SORT 
#include <stdio.h>
int main() {
	int n;
	printf("Enter the size of an Array: ");
	scanf("%d",&n);
    int arr[n];
    printf("Enter %d values for the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element No. %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("BEFORE SORTED: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            if (arr[j] > arr[j+1]) {
                int x = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = x;
            }
        }
    }
    printf("AFTER BUBBLE SORT: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

