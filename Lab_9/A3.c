#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    printf("Enter two ints: ");
    if (scanf("%d %d", &a, &b) != 2)
        return 0;
    int *p = &a, *q = &b;
    printf("Sum = %d\n", *p + *q);
    return 0;
}

