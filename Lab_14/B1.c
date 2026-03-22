#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    // Open file in w+ mode (create + read/write)
    fp = fopen("demo.txt", "w+");

    if (fp == NULL)
    {
        printf("File error!\n");
        return 1;
    }

    // Write data
    fprintf(fp, "Hello World");

    // Move pointer to 6th position using fseek
    fseek(fp, 6, SEEK_SET);

    printf("After fseek:\n");
    while (!feof(fp))
    {
        ch = fgetc(fp);
        if (ch != EOF)
            printf("%c", ch);
    }

    // Move pointer back to beginning using rewind
    rewind(fp);

    printf("\n\nAfter rewind:\n");
    while (!feof(fp))
    {
        ch = fgetc(fp);
        if (ch != EOF)
            printf("%c", ch);
    }

    fclose(fp);
    return 0;
}