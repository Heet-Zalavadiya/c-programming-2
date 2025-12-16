#include <stdio.h>
#include <string.h>

struct student {
    int rollNo;
    char name[50];
    int marks[3];
};

void main() {
	int n,i,j;
	printf("Enter number of students: ");
	scanf("%d",&n);
	
	struct student students[n];
	for(i = 0; i < n; i++) {
		printf("\nStudent %d:\n", i + 1);
         
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
         
        printf("Enter name: ");
        scanf("%s",students[i].name);
       
        for(j = 0; j < 3; j++) {
            printf("Marks of subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
    }
    
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            int total_i = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
            int total_j = students[j].marks[0] + students[j].marks[1] + students[j].marks[2];
            if(total_i < total_j) {
                struct student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    
    printf("\nTop 3 students based on total marks:\n");
    for(i = 0; i < n && i < 3; i++) {
        int total = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
        float percentage = total / 3.0;

        printf("Rank %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Total Marks: %d\n", total);
        printf("Percentage: %.2f\n", percentage);
    }
    
    float sumPercentage = 0;
    for(i = 0; i < n; i++) {
        int total = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
        sumPercentage += total / 3.0;
    }
    float classAverage = sumPercentage / n;
    printf("\nClass Average Percentage: %.2f\n", classAverage);

}
