#include <stdio.h>

void fibbo(int);

void main() {
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	fibbo(n);
}

void fibbo(int n) {
	int a = 0,b = 1,sum = 0,i;
	printf("%d %d ",a,b);
	for(i = 2; i < n; i++) {
		sum = a + b;
		printf("%d ",sum);
		a = b;
		b = sum;
	}
}
