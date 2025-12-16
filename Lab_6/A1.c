#include <stdio.h>
#include <string.h>

struct employee
{
	int id;
	char name[100];
	float salary;
};

void main() {
	struct employee e1;
	e1.id = 101;
    strcpy(e1.name, "Rahul");
    e1.salary = 25000.50;
//	struct Employee e1 = {101, "Rahul", 25000.50};
	
	printf("Id = %d\n", e1.id);
    printf("Name = %s\n", e1.name);
    printf("Salary = %.2f\n", e1.salary);
}
