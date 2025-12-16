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
    printf("int=%d at %p\nfloat=%f at %p\ndouble=%f at %p\nchar=%c at %p\n", *pa, (void *)pa, *pb, (void *)pb, *pc, (void *)pc, *pd, (void *)pd);
}

