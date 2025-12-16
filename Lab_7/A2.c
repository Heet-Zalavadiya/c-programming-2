#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    float percentage;
    int age;
};

void main() {
	int n,i;
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
    
	int maxIndex = 0;
    for(i = 0; i < n; i++) {
    	if(s[i].percentage > s[maxIndex].percentage) {
            maxIndex = i;
        }
	}
	printf("Student with highest percentage:\n");
    printf("Name: %s\n", s[maxIndex].name);
    printf("Percentage: %.2f\n", s[maxIndex].percentage);
    printf("Age: %d\n", s[maxIndex].age);
}
