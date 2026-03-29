#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i;
    if(argc != 2)
    {
        printf("Usage: prog string");
        return 1;
    }

    char *str = argv[1];
    int count = 0;

    for( i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            count++;
        }
    }

    printf("Vowel Count = %d", count);

    return 0;
}
