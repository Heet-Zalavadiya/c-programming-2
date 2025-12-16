#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    
    int *p = a; 
    int *q = b;   
    
    for (int i = 0; i < 5; i++) {
        *(q + i) = *(p + i);
    }

    printf("Copied array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }
    
    return 0;
}

