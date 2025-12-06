#include <stdio.h>
void main() {
	int n = 0,i;
	printf("Enter number to prints its multiplication table : ");
	scanf("%d", &n);
	for(i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n",n,i,n*i);
	}
}
