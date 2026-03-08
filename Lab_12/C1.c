#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student *ptr;

    ptr = (struct Student*) malloc(sizeof(struct Student));

    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll);

    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    printf("\nStudent Details:\n");
    printf("Roll: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    free(ptr);
}
