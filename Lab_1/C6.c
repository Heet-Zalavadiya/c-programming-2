#include <stdio.h>

void main() {
	int n,sum = 0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n != 0) {
		int digit = n % 10;
		sum += digit;
		n = n/10;
	}
	printf("sum of digit of number is %d",sum);
}
