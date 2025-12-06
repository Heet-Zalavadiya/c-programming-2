#include <stdio.h>

void main() {
	int n,rev = 0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n != 0) {
		int digit = n % 10;
		rev = rev * 10 + digit;
		n = n / 10;
	}
	printf("reverse %d",rev);
}
