//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to print student details
void printStudent(struct Student s) {
    printf("Student Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s;

    // Input student details
    printf("Enter student name: ");
    scanf(" %[^\n]%*c", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Call function to print student details
    printStudent(s);

    return 0;
}
