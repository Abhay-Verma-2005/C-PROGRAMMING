//TO CHECK MATRIX IS SPARSE MATRIX OR NOT.
#include <stdio.h>
int main()
{
int n,m,count=0;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    //INPUT IN MATRIX
    printf("Enter the elements of the matrix:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=m; j++) {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &a[i][j]);
    	}
	}
	//PRINT A MATRIX
	printf("MATRIX IS:\n\n");
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            printf("%d\t", a[i][j]);
            if (a[i][j]==0){
            count++;	
			}
		}
			printf("\n\n");
        }
        if(count<=(n*m/2)){
        	printf("\nIt is a not sparse matrix");
		}
		else{
        	printf("\nIt is a sparse matrix");
		}  
}

