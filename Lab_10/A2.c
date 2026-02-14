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

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
}
