#include<stdio.h>

int main()
{
    FILE *source, *target;
    char ch;

    // Open source file in read mode
    source = fopen("source.txt","r");

    // Open target file in write mode
    target = fopen("target.txt","w");

    // Check if files opened successfully
    if(source == NULL || target == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    // Read characters from source and write to target
    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch,target);
    }

    printf("File copied successfully\n");

    // Close both files
    fclose(source);
    fclose(target);

    return 0;
}
