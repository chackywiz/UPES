//Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Take input from user
    printf("Enter your name: ");
    scanf("%[^\n]%*c", name);  // read string with spaces
    printf("Enter your age: ");
    scanf("%d", &age);

    // Write to file
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    // Close the file
    fclose(fp);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
