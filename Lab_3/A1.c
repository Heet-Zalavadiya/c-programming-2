#include <stdio.h>

void addTwoNumbers(int,int);

void main() {
	int a,b;
	printf("Enter number a: ");
	scanf("%d",&a);
	printf("Enter number b: ");
	scanf("%d",&b);
	
	addTwoNumbers(a,b);
}

void addTwoNumbers(int n, int m) {
	printf("%d + %d = %d",n,m,n+m);
}
