#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
    if(argc != 6)
    {
        printf("Enter exactly 5 numbers");
        return 1;
    }

    int sum = 0;

    for(i = 1; i <= 5; i++)
    {
        sum += atoi(argv[i]);
    }

    float avg = sum / 5.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}
