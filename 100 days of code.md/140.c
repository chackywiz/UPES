//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

// Define enum for Gender
enum Gender {MALE, FEMALE, OTHER};

// Define struct for Person
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    // Input person details
    printf("Enter name: ");
    scanf(" %[^\n]%*c", p.name);  // Read string with spaces

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Select gender (0: MALE, 1: FEMALE, 2: OTHER): ");
    int g;
    scanf("%d", &g);

    if (g < MALE || g > OTHER) {
        printf("Invalid gender selected!\n");
        return 1;
    }

    p.gender = (enum Gender)g;

    // Print person details
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    printf("Gender: ");
    switch(p.gender) {
        case MALE:   printf("MALE\n"); break;
        case FEMALE: printf("FEMALE\n"); break;
        case OTHER:  printf("OTHER\n"); break;
    }

    return 0;
}
