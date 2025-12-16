#include <stdio.h>
#include <string.h>
struct S
{
    int x;
    char name[10];
};
union U
{
    int x;
    char name[10];
};

void main()
{
    struct S s;
    s.x = 5;
    strcpy(s.name, "abc");
    union U u;
    u.x = 5;
    strcpy(u.name, "abc"); // note: overwrites same memory
    printf("Struct: x=%d name=%s\n", s.x, s.name);
    printf("Union: x=%d name=%s\n", u.x, u.name);
}

