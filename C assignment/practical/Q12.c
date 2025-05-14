// Write a C program that defines a structure to store a student's details (name, 
// roll number, and marks). Use an array of structures to store details of 3 
// students and print them. 


#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
}s[10];

int main() {
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        getchar(); // Clear newline left by previous scanf
        fgets(s[i].name, sizeof(s[i].name), stdin);

        // Remove trailing newline from fgets
        if (s[i].name[strlen(s[i].name) - 1] == '\n') {
            s[i].name[strlen(s[i].name) - 1] = '\0';
        }

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--------Student Details--------\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].rollNo);
        printf("Marks: %.2f\n\n", s[i].marks);
    }

    return 0;
}
