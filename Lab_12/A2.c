#include <stdio.h>
#include <stdlib.h>

void main() {
    int n, i, sum = 0;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    if(ptr == NULL) {
        printf("Memory not allocated\n");
        return;
    }

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &ptr[i]); // (ptr + i)
        sum += ptr[i];
    }

    printf("Sum = %d\n", sum);

    free(ptr);
}
