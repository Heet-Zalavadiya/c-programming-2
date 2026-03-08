#include <stdio.h>
#include <stdlib.h>

void main() {
    int *ip;
    char *cp;
    float *fp;

    ip = (int*) malloc(sizeof(int));
    cp = (char*) malloc(sizeof(char));
    fp = (float*) malloc(sizeof(float));

    *ip = 10;
    *cp = 'A';
    *fp = 3.14;

    printf("Integer value: %d\n", *ip);
    printf("Character value: %c\n", *cp);
    printf("Float value: %.2f\n", *fp);

    free(ip);
    free(cp);
    free(fp);
}
