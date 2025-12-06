#include <stdio.h>

void main() {
	int i,j,n = 3,m = 3;
	int a[n][m];
	int b[n][m];
	int sum[n][m];
	
	printf("Enter element in matrix a: \n");
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			printf("a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter element in matrix b: \n");
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
		    printf("b[%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
	
	printf("Addition of two matrix: \n");
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
}
