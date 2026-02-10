#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    float percentage;
    int age;
};

void main()
{
    struct student s[5];
    int i;

    printf("Enter data for 5 students:\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter percentage: ");
        scanf("%f", &s[i].percentage);

        printf("Enter age: ");
        scanf("%d", &s[i].age);
    }

    printf("\n---- Student Details ----\n");
    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Percentage: %.2f\n", s[i].percentage);
        printf("Age: %d\n", s[i].age);
    }
}
