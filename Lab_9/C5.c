#include <stdio.h>

void main() {
	int i;
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {10, 20, 30, 40, 50};

    int *p = a;
    int *q = b;

    int temp;

    for (i = 0; i < 5; i++) {
        temp = *(p + i);
        *(p + i) = *(q + i);
        *(q + i) = temp;
    }

    printf("Array A after swap: ");
    for (i = 0; i < 5; i++) {
    	printf("%d ", a[i]);
	}
        
    printf("\nArray B after swap: ");
    for (i = 0; i < 5; i++) {
    	printf("%d ", b[i]);
	}
	
}

