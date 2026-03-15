#include <stdio.h>

void main()
{
    FILE *fp;

    fp = fopen("sample.txt", "w");  // Create and open file

    if(fp == NULL)
    {
        printf("File cannot be created.");
        return;
    }

    printf("File created and opened successfully.\n");

    fclose(fp);  // Close file

    printf("File closed successfully.");
}
