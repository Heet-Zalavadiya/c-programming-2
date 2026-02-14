#include <stdio.h>

void main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    printf("\nPositive numbers:\n");
    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) > 0)
        {
            printf("%d ", *(ptr + i));
        }
    }

    printf("\n\nNegative numbers:\n");
    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) < 0)
        {
            printf("%d ", *(ptr + i));
        }
    }
}
