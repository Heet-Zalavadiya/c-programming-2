#include <stdio.h>
void main()
{
    int a = 0, b = 0;
    printf("Enter two ints: ");
    scanf("%d %d", &a, &b);
    int *p = &a;
    int *q = &b;
    printf("Sum = %d\n", *p + *q);
}
