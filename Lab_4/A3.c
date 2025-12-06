#include <stdio.h>

void swap(int *, int *);

void main() {
	int x,y;
	printf("Enter two numbers: ");
	scanf("%d %d",&x,&y);
	
	printf("Before swapping x = %d ,y = %d \n",x,y);
	
	swap(&x,&y);
	
	printf("After swap function call in main x = %d ,y = %d \n",x,y);
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = *a;
}

