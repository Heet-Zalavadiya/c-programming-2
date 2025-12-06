#include <stdio.h>

void main() {
	int a[100],i,n;
	int pos,value;
	printf("Enter size of array: ");
	scanf("%d",&n);
	
	printf("Enter %d elements\n",n);
	for(i = 0; i < n; i++) {
		scanf("%d",&a[i]);
	}
	
	printf("Enter positon to insert 1 to %d: ",n + 1);
	scanf("%d",&pos);
	
	printf("Enter value to insert: ");
	scanf("%d",&value);
	
	for(i = n; i >= pos; i--) {
		a[i] = a[i-1];
	}
	
	a[pos - 1] = value;
	n++;
	
	printf("Array after insertion: \n");
	for(i = 0; i < n; i++) {
		printf("%d ",a[i]);
	}
	
}
