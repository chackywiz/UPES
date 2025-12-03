//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#include <stdlib.h>

// Define Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define Employee structure
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;
};

int main() {
    FILE *fp;
    struct Employee emp;
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Open binary file for writing
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Input employee details and write to file
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]%*c", emp.name);

        printf("ID: ");
        scanf("%d", &emp.id);

        printf("Salary: ");
        scanf("%f", &emp.salary);

        printf("Joining Date (dd mm yyyy): ");
        scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

        // Write the struct to binary file
        fwrite(&emp, sizeof(struct Employee), 1, fp);
    }

    fclose(fp);
    printf("\nEmployee data saved to employees.dat\n");

    // Open binary file for reading
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nReading employee data from file:\n");

    while (fread(&emp, sizeof(struct Employee), 1, fp) == 1) {
        printf("\nName: %s\n", emp.name);
        printf("ID: %d\n", emp.id);
        printf("Salary: %.2f\n", emp.salary);
        printf("Joining Date: %02d-%02d-%d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);
    }

    fclose(fp);

    return 0;
}
