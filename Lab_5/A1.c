#include <stdio.h>

int factorial(int);
int factorialRecursive(int);

void main() {
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
    printf("factorial of %d is %d using iterative function\n",n,factorial(n));
    printf("factorial of %d is %d using recursive function ",n,factorialRecursive(n));
}

int factorial(int num) {
	int i,fact = 1;
	for(i = 1; i <= num; i++) {
		fact *= i; 
	}
	
	return fact;
}

int factorialRecursive(int num) {
	if(num == 0 || num == 1) {
		return 1;
	}
    return num * factorialRecursive(num - 1);
}
