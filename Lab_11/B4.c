#include <stdio.h>

void main() {
	char str1[100]; // source string
	char str2[100]; // destination string
	char* p1;
	p1 = str1;
	char* p2;
	p2 = str2;
	
	printf("Enter string1 : ");
	gets(str1);
	
	while(*p1 != '\0') {
		*p2 = *p1;
		p1++;
		p2++;
	}
	
	*p2 = '\0';
	printf("Copied string2 : %s",str2);
}
