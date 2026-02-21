#include <stdio.h>

void main() {
    int n = 3, m = 3;
    int a[3][3];
    int* p = &a[0][0];

    int i, j;

    printf("Enter matrix:\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", p + i*m + j);
        }
    }

    printf("Sum of columns:\n");

    for(j = 0; j < m; j++) {
        int sum = 0;

        for(i = 0; i < n; i++) {
            sum += *(p + i*m + j);
        }

        printf("Column %d sum = %d\n", j, sum);
    }

}
