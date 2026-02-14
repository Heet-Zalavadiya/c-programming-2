#include <stdio.h>
void main()
{
    int x = 10;
    // printf("Value = %d, Address = %p\n", x,&x);

    int *ptr;
    ptr = &x;
    printf("Value = %d, Address = %p\n", *ptr, ptr);
}
