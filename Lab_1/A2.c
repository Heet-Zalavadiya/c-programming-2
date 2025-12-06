#include <stdio.h>
void main() {
	int n = 0,i;
	int f = 1;
	printf("Enter a number to find its factorial :");
	scanf("%d",&n);
	for(i = 1; i <= n; i++) {
		f *= i;
	}
	printf("factorial of %d is %d",n,f);
}
