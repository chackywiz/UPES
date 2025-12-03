//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

// Define Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define Employee structure with nested Date
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;

    // Input Employee details
    printf("Enter employee name: ");
    scanf(" %[^\n]%*c", emp.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter salary: ");
    scanf("%f", &emp.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    // Print Employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d-%02d-%d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}
