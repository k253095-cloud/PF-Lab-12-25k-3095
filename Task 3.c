#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student *students;
    int n;

    // Ask user how many students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Dynamic allocation
    students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Read data
    for (int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter marks of %s: ", students[i].name);
        scanf("%d", &students[i].marks);
    }

    // Display students scoring more than 75
    printf("\nStudents scoring more than 75 marks:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks > 75) {
            printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
        }
    }

    // Free memory
    free(students);

    return 0;
}

