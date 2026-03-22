#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    // Open source file
    fp1 = fopen("source.txt", "r");

    if (fp1 == NULL)
    {
        printf("Source file not found!\n");
        return 1;
    }

    // Open destination file
    fp2 = fopen("dest.txt", "w");

    if (fp2 == NULL)
    {
        printf("Cannot create destination file!\n");
        return 1;
    }

    // Copy using feof()
    while (!feof(fp1))
    {
        ch = fgetc(fp1);
        if (ch != EOF)
            fputc(ch, fp2);
    }

    printf("File copied successfully!\n");

    // Close files
    fclose(fp1);
    fclose(fp2);

    return 0;
}