#include <stdio.h>

int power(int,int);

void main() {
	int base,exp;
	printf("Enter base: ");
	scanf("%d",&base);
	
	printf("Enter exponent: ");
	scanf("%d",&exp);
	
	int pow = power(base,exp);
	printf("%d ^ %d = %d",base,exp,pow);
}

int power(int base,int exp) {
	if(exp == 0) {
		return 1;
	}
	return base * power(base, exp - 1);
}
