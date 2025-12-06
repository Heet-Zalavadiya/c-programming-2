#include <stdio.h>

void findMax(int,int);

void main() {
	int a,b;
	printf("Enter number a: ");
	scanf("%d",&a);
	printf("Enter number b: ");
	scanf("%d",&b);
	
	findMax(a,b);
}

void findMax(int n, int m) {
	(n > m) ? printf("Max is %d",n) : printf("Max is %d",m);
}
