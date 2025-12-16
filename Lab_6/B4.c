#include <stdio.h>
struct Date
{
    int d, m, y;
};
struct Person
{
    char name[50];
    struct Date dob;
};

void main()
{
    struct Person p = {"Alice", {1, 1, 2000}};
    printf("Name: %s, DOB: %d-%d-%d\\n", p.name, p.dob.d, p.dob.m, p.dob.y);
}

