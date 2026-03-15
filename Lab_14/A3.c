#include<stdio.h>

int main()
{
    FILE *fptr;
    char ch;

    int chars=0, spaces=0, tabs=0, lines=0;

    // Open file in read mode
    fptr = fopen("hello.txt","r");

    if(fptr == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    // Read file character by character
    while((ch = fgetc(fptr)) != EOF)
    {
        chars++;   // Count characters

        if(ch==' ')
            spaces++;   // Count spaces

        if(ch=='\t')
            tabs++;     // Count tabs

        if(ch=='\n')
            lines++;    // Count new lines
    }

    // Display counts
    printf("Characters = %d\n",chars);
    printf("Spaces = %d\n",spaces);
    printf("Tabs = %d\n",tabs);
    printf("Lines = %d\n",lines);

    // Close file
    fclose(fptr);

    return 0;
}
