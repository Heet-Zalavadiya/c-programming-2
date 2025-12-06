#include <stdio.h>

void primeInterval(int,int);

void main() {
	int start,end;
	printf("Enter start of interval: ");
	scanf("%d",&start);
	
	printf("Enter end of interval: ");
	scanf("%d",&end);
	
	primeInterval(start,end);
}

void primeInterval(int from, int to) {
	int num,i;
	for(num = from; num <= to; num++) {
		int isPrime = 1;
		
		if(num <= 1) {
			isPrime = 0;
		}
		
		for(i = 2;  i * i <= num; i++) {
			if(num % i == 0) {
				isPrime = 0;
				break;
			}
		}
		
		if(isPrime) {
			printf("%d ", num);
		}
	}
}
