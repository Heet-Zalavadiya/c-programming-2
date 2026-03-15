#include <stdio.h>

#define PRINT(x) printf("Value = %d\n", x)

void main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    PRINT(num);
}
