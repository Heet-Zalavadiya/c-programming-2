#include <stdio.h>

void main() {
	char str[100];
	int i = 0;
	
	printf("Enter a string: ");
	gets(str);
	
	// length of string
	while(str[i] != '\0') {
		i++;
	}
	
    int j = i - 1;
	i = 0;
	while (i < j) {
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	
	printf("Reversed string = %s", str);
}
