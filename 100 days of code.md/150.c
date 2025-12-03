//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
#include <stdlib.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;           // Declare a structure variable
    struct Student *ptr;        // Declare a pointer to structure

    ptr = &s;                   // Point to the structure variable

    // Input student details using pointer
    printf("Enter student name: ");
    scanf(" %[^\n]%*c", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Modify data using pointer
    printf("\nModifying marks by adding 5...\n");
    ptr->marks += 5;

    // Display student details using pointer
    printf("\nStudent Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
