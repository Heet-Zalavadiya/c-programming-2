#include <stdio.h>

void swap(int *, int *);

void main()
{
    int num1 = 10;
    int num2 = 20;

    printf("Before swapping - \n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    swap(&num1, &num2);

    printf("\nAfter swapping - \n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}