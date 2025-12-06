#include <stdio.h>

void swapArray(int[],int[],int);

void main() {
	int n,i;
	printf("Enter size of array: ");
	scanf("%d",&n);
	
	int a[n],b[n];
	printf("Enter elements of array a: \n");
	for(i = 0; i < n; i++) {
		scanf("%d",&a[i]);
	}
	printf("Enter elements of array b: \n");
	for(i = 0; i < n; i++) {
		scanf("%d",&b[i]);
	}
	
	swapArray(a,b,n);
	
	printf("After swapping:\n");

    printf("Array a: \n");
    for (i = 0; i < n; i++) {
    	printf("%d ", a[i]);
	}
        
    printf("\nArray b: \n");
    for (i = 0; i < n; i++) {
    	printf("%d ", a[i]);
	}
}

void swapArray(int a[], int b[], int size) {
	int i;
	for (i = 0; i < size; i++) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
