#include <stdio.h>

int main()
{
    FILE *fp;
    char ch, name[10];
    int age;

    // Open file for writing
    fp = fopen("file.txt", "w");

    // fprintf() and fputc()
    fprintf(fp, "Ram 18\n");
    fputc('A', fp);

    fclose(fp);

    // Open file for reading
    fp = fopen("file.txt", "r");

    // fscanf()
    fscanf(fp, "%s %d", name, &age);
    printf("Name: %s Age: %d\n", name, age);

    // fgetc()
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}