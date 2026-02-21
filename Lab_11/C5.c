#include <stdio.h>

void main() {
	int r=3,c=3,max;
	int mat[r][c];
	
	int *p;
	p = &mat[0][0];
//	p = mat[0];
	
	int i,j;
	
	printf("Enter elements of matrix \n");
	for(i = 0; i < r; i++) {
		for(j = 0; j < c; j++) {
			scanf("%d", p + i*c + j);
		}
	}
	
    max = *p;
	for(i = 0; i < r*c; i++) {
		if(*(p+i) > max) {
			max = *(p + i);
		}
	}
	
	printf("Maximum element is %d", max);
}
