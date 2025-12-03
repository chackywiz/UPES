//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]%*c", students[i].name); // read string with spaces
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Write student records to file
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    fclose(fp);

    printf("\nRecords saved to students.txt\n\n");

    // Read and display student records from file
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Student Records:\n");
    while (fscanf(fp, "%s %d %f", students[0].name, &students[0].roll, &students[0].marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", students[0].name, students[0].roll, students[0].marks);
    }

    fclose(fp);

    return 0;
}
