#include <stdio.h>

void printArray(int[], int);

void main() {
	int a[5];
	int i;
	
	printf("Enter 5 numbers: \n");
	for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    
    printArray(a, 5);
}

void printArray(int a[], int size) {
	int i;
	for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
