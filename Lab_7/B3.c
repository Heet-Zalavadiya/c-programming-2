#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    float percentage;
    int age;
};

void main() {
	int n,i,j;
	printf("Enter number of students: ");
	scanf("%d",&n);
	
	struct student s[n];
	for(i = 0; i < n; i++) {
		printf("\nStudent %d:\n", i + 1);
         
        printf("Enter name: ");
        scanf("%s",s[i].name);
       
        printf("Enter percentage: ");
        scanf("%f", &s[i].percentage);

        printf("Enter age: ");
        scanf("%d", &s[i].age);
    }
    
	for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(s[i].name, s[j].name) > 0) {
                struct student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
	
	printf("\n---- Student Details in alphabetical order ----\n");
    for(i = 0; i < n; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Percentage: %.2f\n", s[i].percentage);
        printf("Age: %d\n", s[i].age);
    }   
}
