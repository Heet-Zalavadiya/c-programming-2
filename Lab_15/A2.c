#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("Usage: prog num1 num2");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    if(a > b)
        printf("Maximum = %d", a);
    else
        printf("Maximum = %d", b);

    return 0;
}
