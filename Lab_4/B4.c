#include <stdio.h>

int reverseNumber(int);

void main() {
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
    int reverse = reverseNumber(n);
	
	if(n == reverse) {
		printf("Enterd number is palindrome %d",n);
	}
	else {
		printf("Enterd number is not palindrome n = %d and rev = %d",n,reverse);
	}
}

int reverseNumber(int n) {
	int rev = 0;
	while(n != 0) {
		int digit = n % 10;
		rev = rev * 10 + digit;
	    n = n / 10;
	}
	return rev;
}