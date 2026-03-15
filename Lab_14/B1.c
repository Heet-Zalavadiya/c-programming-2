#include<stdio.h>

int main()
{
    FILE *fptr;
    char ch;

    // Open file in read mode
    fptr = fopen("hello.txt","r");

    if(fptr == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    // Move file pointer to 5th position from beginning
    fseek(fptr,5,SEEK_SET);

    // Read character at that position
    ch = fgetc(fptr);
    printf("Character after fseek: %c\n",ch);

    // Move pointer back to beginning
    rewind(fptr);

    // Read first character again
    ch = fgetc(fptr);
    printf("First character after rewind: %c\n",ch);

    // Close file
    fclose(fptr);

    return 0;
}
