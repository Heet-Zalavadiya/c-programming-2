#include <stdio.h>

void main() {
	int n,i,j,temp;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements in array: ",n);
	for(i = 0; i < n; i++) {
		scanf("%d",&a[i]);
	}

	for(i = 0; i < n; i++) {
		for(j = i+1; j < n; j++) {
			if(a[i] > a[j]) {
				temp = a[i];
                a[i] = a[j];
                a[j] = temp;
			}
		}
	}
	
	printf("Sorted array : ");
	for(i = 0; i < n; i++) {
		printf("%d ",a[i]);
	}
	
}
