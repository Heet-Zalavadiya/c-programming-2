#include <stdio.h>
void main()
{
    int a = 10;
    float b = 3.14;
    double c = 2.71828;
    char d = 'A';
    int *pa = &a;
    float *pb = &b;
    double *pc = &c;
    char *pd = &d;
    printf("int=%d at %u\nfloat=%f at %u\ndouble=%f at %u\nchar=%c at %u\n", *pa, pa, *pb, pb, *pc, pc, *pd, pd);
}
