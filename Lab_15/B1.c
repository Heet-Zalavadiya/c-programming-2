#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int even = 0, odd = 0,i;

    if(argc < 2)
    {
        printf("Enter numbers");
        return 1;
    }

    for(i = 1; i < argc; i++)
    {
        int num = atoi(argv[i]);

        if(num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even Count = %d\n", even);
    printf("Odd Count = %d", odd);

    return 0;
}
