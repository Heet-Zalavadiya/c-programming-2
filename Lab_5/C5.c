#include <stdio.h>

int reverseNumber(int, int);

void main() {
	int num;
	printf("Enter a number: ");
    scanf("%d", &num);
    
    int rev = reverseNumber(num, 0);
    printf("Reversed number = %d\n", rev);
}

int reverseNumber(int n, int rev) {
	 if(n == 0){
        return rev;
    }
    else{
        rev = rev * 10 + (n % 10);
        return reverseNumber(n / 10, rev);
    }
}

//int reverseNumber(int n) {
//    static int rev = 0; 
//
//    if (n == 0) {
//        return rev;
//    }
//    rev = rev * 10 + (n % 10);
//
//    return reverseNumber(n / 10);
//}
