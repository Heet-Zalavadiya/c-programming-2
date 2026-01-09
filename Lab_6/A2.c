#include <stdio.h>

struct book
{
    char title[50];
    char author[50];
    char publication[50];
    float price;
};

void main()
{
    struct book b1, b2, b3;

    printf("Enter details of Book 1:\n");
    printf("Title: ");
    scanf("%s", b1.title);
    printf("Author: ");
    scanf("%s", b1.author);
    printf("Publication: ");
    scanf("%s", b1.publication);
    printf("Price: ");
    scanf("%f", &b1.price);

    printf("\nEnter details of Book 2:\n");
    printf("Title: ");
    scanf("%s", b2.title);
    printf("Author: ");
    scanf("%s", b2.author);
    printf("Publication: ");
    scanf("%s", b2.publication);
    printf("Price: ");
    scanf("%f", &b2.price);

    printf("\nEnter details of Book 3:\n");
    printf("Title: ");
    scanf("%s", b3.title);
    printf("Author: ");
    scanf("%s", b3.author);
    printf("Publication: ");
    scanf("%s", b3.publication);
    printf("Price: ");
    scanf("%f", &b3.price);

    printf("\n\n--- Book Details ---\n");
    printf("\nBook 1:\n");
    printf("Title: %s\n", b1.title);
    printf("Author: %s\n", b1.author);
    printf("Publication: %s\n", b1.publication);
    printf("Price: %.2f\n", b1.price);

    printf("\nBook 2:\n");
    printf("Title: %s\n", b2.title);
    printf("Author: %s\n", b2.author);
    printf("Publication: %s\n", b2.publication);
    printf("Price: %.2f\n", b2.price);

    printf("\nBook 3:\n");
    printf("Title: %s\n", b3.title);
    printf("Author: %s\n", b3.author);
    printf("Publication: %s\n", b3.publication);
    printf("Price: %.2f\n", b3.price);
}
