#include <stdio.h>

void main()
{
    FILE *fp;
    char ch;
    int num;

    fp = fopen("data.txt", "w+");

    fprintf(fp, "Number: %d\n", 100);  // write formatted data
    fputc('A', fp);                    // write single character

    rewind(fp);                        // move pointer to start

    fscanf(fp, "Number: %d", &num);    // read formatted data
    printf("Read number: %d\n", num);

    fseek(fp, 0, SEEK_END);
    fseek(fp, -1, SEEK_CUR);

    ch = fgetc(fp);                    // read single character
    printf("Read character: %c\n", ch);

    fclose(fp);
}
