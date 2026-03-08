#include <stdio.h>
#include <stdlib.h>

void main() {
	int *p, i, n1, n2;
	printf("Enter size Here:\n");
	scanf("%d",&n1);
	
	p = (int *)malloc(n1 * sizeof(int));

	printf("Enter Elements \n");
	
	for(i=0;i<n1;i++) {
		scanf("%d",&p[i]);
	}
	
	printf("\nEnter Updated Size Here: ");
	scanf("%d",&n2);
	p = realloc(p , n2 * sizeof(int));
	
	printf("\nEnter elements Again \n");
	for(i = n1; i < n2; i++) {
		scanf("%d",&p[i]);
	}
	
	printf("Final elements are: \n");
	
	for(i = 0; i < n2; i++) {
		printf("%d\n",p[i]);
	}
	
	free(p);
}
