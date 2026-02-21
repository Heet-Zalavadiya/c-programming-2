#include <stdio.h>

void main() {

    int n = 3, m = 3;
    int a[3][3], b[3][3], c[3][3];

    int *p1;
//  p1 = a[0];
	p1 = &a[0][0];
    
	int *p2;
//  p2 = b[0];
	p2 = &b[0][0];
    
	int *p3;
//  p3 = c[0];
	p3 = &c[0][0];

    int i, j;

    printf("Enter matrix A:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", p1 + i*m + j);
        }
    }

    printf("Enter matrix B:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", p2 + i*m + j);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            *(p3 + i*m + j) = *(p1 + i*m + j) + *(p2 + i*m + j);
        }
    }

    printf("Result matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", *(p3 + i*m + j));
        }
        printf("\n");
    }

}
